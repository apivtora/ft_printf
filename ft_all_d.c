/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 10:12:20 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/08 12:43:14 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_all_d(t_flags *flags, char c, va_list argptr)
{
	void *temp;
	intmax_t buf;
	uintmax_t ubuf;
	int i;

	i = 0;
	temp = va_arg(argptr, void *);
	buf = (int)temp;
	ubuf = (unsigned int)temp;
	if (flags->size[0] == 'z')
	{
		buf = (size_t)temp;
		ubuf = (size_t)temp;
	}
	else if (flags->size[0] == 'j' || flags->size[1] == 'l')
	{
		buf = (intmax_t)temp;
		ubuf = (uintmax_t)temp;
	}
	else if (flags->size[0] == 'l' || c == 'U' || c == 'O' || c == 'D')
	{
		buf = (long)temp;
		ubuf = (unsigned long)temp;
	}
	else if (flags->size[1] == 'h')
	{
		buf = (char)temp;
		ubuf = (unsigned char)temp;
	}
	else if (flags->size[0] == 'h')
	{
		buf = (short)temp;
		ubuf = (unsigned short)temp;
	}
	if ((c == 'd' || c == 'i' || c == 'D'))
	{
		flags->line = ft_llitoa(buf);
		if (buf < 0)
			flags->sign = '-';
	}
	else if (c == 'u' || c == 'U')
		flags->line = ft_ullitoa(ubuf);
	else if (c == 'o' || c == 'O')
		flags->line  = ft_llitoua_base(ubuf, 8);
	else if (c == 'x'|| c == 'X')
		flags->line  = ft_llitoua_base(ubuf, 16);
	else if (c == 'b')
		flags->line  = ft_llitoua_base(ubuf, 2);
	while (flags->line[i] != '\0' && c == 'X')
	{
		if (flags->line[i] >= 'a'  && flags->line[i] <= 'z')
			flags->line[i] = flags->line[i] - 32;
		i++;
	}
	flags->type = 'd';
	if (flags->dot == 0 && flags->line[0] == '0')
		flags->line[0] = '\0';
}

