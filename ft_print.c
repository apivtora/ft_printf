/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 10:15:49 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/05 10:47:33 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// *1 & *2 нужно попробовать попробовать оптимизировать
int ft_print(t_flags *flags)
{
	int ret;
	int nbr;

	if (flags->type == 'C')
		nbr = ft_wstrsize(flags->line2);
	else
		nbr = ft_strlen(flags->line);	   // переместить в структуру 0_о?!
	ret = 0;
	if (flags->space == 1 && flags->type == 'd')
		ret = ret + write (1, " " , 1);
	if ( !flags->zero && flags->line_pre)
		ret = ret + ft_putstr(flags->line_pre);
	if ((flags->plus || flags->sign == '-') && (flags->letter == 'd' || flags->letter == 'D'))//*2
		ret = ret + write(1, &flags->sign, 1);
	else if (flags->hash && (flags->letter == 'o' || flags->letter == 'O'))
		ret = ret + write(1, "0", 1);
	else if (flags->hash && (flags->letter == 'x'))
		ret = ret + write(1, "0x", 2);
	else if (flags->hash && (flags->letter == 'X'))
		ret = ret + write(1, "0X", 2);
	if ( flags->zero && flags->line_pre)
		ret = ret + ft_putstr(flags->line_pre);
	if (flags->dot - nbr > 0 && flags->type == 'd')
	{
		while ( flags->dot - nbr > 0)
		{
			ret = ret + write (1, "0",1); // можно слегка урезать
			nbr++;
		}
	}
	if (flags->dot && flags->dot < nbr  && flags->type == 's')
		ret = ret + write(1, flags->line, flags->dot);
	else
		ret = ret + ft_putstr(flags->line);
//	else
	if  (flags->type == 'C' && flags->dot)
		ret = ret + ft_put_w(flags);
	else if (flags->type == 'C')
		ret = ret + ft_putstr_u(flags->line2);
	if (flags->line_post)
		ret = ret + ft_putstr(flags->line_post);
	flags->line = NULL;
	flags->line2 = NULL;
	return (ret);
}
