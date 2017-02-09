/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 10:15:49 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/08 15:17:27 by apivtora         ###   ########.fr       */
	/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// *1 & *2 нужно попробовать попробовать оптимизировать
int ft_print(t_flags *flags)
{
	int ret;
	int nbr;

	if (flags->color)
		ft_color(flags->color);
	if (flags->type == 'C')
		nbr = ft_wstrsize(flags->line2);
	else
		nbr = ft_strlen(flags->line);	   // переместить в структуру 0_о?!
	ret = 0;
	if (flags->space == 1 && flags->type == 'd')
		ret = ret + write (1, " " , 1);
	if ( !flags->zero && flags->line_pre)
		ret = ret + ft_putstr(flags->line_pre);
	if (flags->line)
	{
		if ((flags->plus || flags->sign == '-') && (flags->letter == 'd' || flags->letter == 'D' || flags->letter == 'i'))//*2
			ret = ret + write(1, &flags->sign, 1);
		else if ((flags->line[0] != '0' && flags->line[0]) || flags->letter == 'p')
		{
			if (flags->hash && (flags->letter == 'o' || flags->letter == 'O'))
			{
				ret = ret + write(1, "0", 1);
				nbr++;
			}
			else if (flags->hash && (flags->letter == 'x' || flags->letter == 'p'))
				ret = ret + write(1, "0x", 2);
			else if (flags->hash && (flags->letter == 'X'))
				ret = ret + write(1, "0X", 2);
		}
		else if (flags->line[0] == 0 && (flags->letter == 'o' || flags->letter == 'O') && flags->hash)
			ret = ret + write(1, "0", 1); // возможно можно убрать
	}
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
	if (flags->dot >= 0 && flags->dot< nbr && ft_if_type(flags->letter) && flags->type == 's')
		ret = ret + write(1, flags->line, flags->dot);
	else
		ret = ret + ft_putstr(flags->line);
	if ((flags->letter == 'c' && flags->line[0] == 0) || (flags->letter == 'C' && flags->line2[0] == 0))
			ret = ret + write(1, "\0",1);
	if  (flags->type == 'C' && (flags->dot >= 0))
		ret = ret + ft_put_w(flags);
	else if (flags->type == 'C')
		ret = ret + ft_putstr_u(flags->line2);
	if (flags->line_post)
		ret = ret + ft_putstr(flags->line_post);
	if (flags->color)
		write (1, "\x1b[0m", 4);
	flags->line = NULL;
	flags->line2 = NULL;
	return (ret);
}
