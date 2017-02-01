/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 10:15:49 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/01 12:51:10 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// *1 & *2 нужно попробовать попробовать оптимизировать
int ft_print(t_flags *flags)
{
	int ret;
	int nbr;

	nbr = ft_strlen(flags->line); // переместить в структуру 0_о?!
	ret = 0;
	if (flags->space == 1 && flags->type == 'd')
		ret = ret + write (1, " " , 1);
	if ((flags->plus || flags->sign == '-') && flags->zero && (flags->letter == 'd' || flags->letter == 'D')) //*1
		ret = ret + write(1, &flags->sign, 1);
	else if (flags->zero && flags->hash && (flags->letter == 'o' || flags->letter == 'O'))
		ret = ret + write(1, "0", 1);
	else if (flags->zero && flags->hash && (flags->letter == 'x'))
		ret = ret + write(1, "0x", 2);
	else if (flags->zero && flags->hash && (flags->letter == 'X'))
		ret = ret + write(1, "0X", 2);
	if (flags->line_pre)
		ret = ret + ft_putstr(flags->line_pre);
	if ((flags->plus || flags->sign == '-') && !flags->zero && (flags->letter == 'd' || flags->letter == 'D'))//*2
		ret = ret + write(1, &flags->sign, 1);
	else if (!flags->zero && flags->hash && (flags->letter == 'o' || flags->letter == 'O'))
		ret = ret + write(1, "0", 1);
	else if (!flags->zero && flags->hash && (flags->letter == 'x'))
		ret = ret + write(1, "0x", 2);
	else if (!flags->zero && flags->hash && (flags->letter == 'X'))
		ret = ret + write(1, "0X", 2);

	if (flags->dot - nbr > 0 && flags->type == 'd')
	{
		while ( flags->dot - nbr > 0)
		{
			ret = ret + write (1, "0",1); // можно слегка урезать
			nbr++;
		}
	}
	if (flags->line)
		ret = ret + ft_putstr(flags->line);
	if (flags->line_post)
		ret = ret + ft_putstr(flags->line_post);
	flags->line = NULL;
	return (ret);
}
