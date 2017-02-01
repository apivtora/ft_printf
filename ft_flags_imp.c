/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_imp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:29:29 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/01 12:17:05 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_zero(t_flags *flags, int nbr)
{
	int i;
	char *new;
	char symb;

	i = 0;
	symb = ' ';
	if (((flags->zero && flags->num - nbr > 0) || flags->dot - nbr > 0 ) && (flags->letter == 'o' || flags->letter == 'O'))
		flags->letter = 'd'; /////////хорошо подумать!
	if (flags->dot - nbr > 0 && flags->type == 'd')
		nbr = flags->dot;
	if (flags->zero)
		symb = '0';
	if (flags->hash && (flags->letter == 'x' || flags->letter == 'X'))
		nbr = nbr + 2;
	if (flags->space && flags->type != 's')                            ////////
		nbr++;                                   ////////поправить на норм вывод
	if (flags->sign == '-' || (flags->plus && (flags->letter == 'd' || flags->letter == 'D')))
		nbr++;                                   ////////
	if (flags->hash && (flags->letter == 'o' || flags->letter == 'O'))
		nbr++;
	new = ft_memalloc(flags->num - nbr + 1);
	while (flags->num - (nbr + i) > 0)
	{
		new[i] = symb;
		i++;
	}
	return (new);
}

void ft_flags_imp(t_flags *flags)
{
	int i;
	char *buf;

	i = 0;
	if (flags->plus || flags->sign == '-')
		flags->space = 0;
	if  (flags->minus || (flags->dot && flags->type == 'd'))
		flags->zero = 0;
	else if (flags->dot && flags->type == 's')
	{
		buf = ft_memalloc(flags->dot + 1);
		flags->line = ft_strncpy(buf, flags->line, flags->dot);
	}
	while (flags->line[i])
		i++;
	if (flags->num - i > 0)
		flags->line_pre = ft_zero(flags, i);
	if(flags->minus)
	{
		flags->line_post = flags->line_pre;
		flags->line_pre = NULL;
	}
}

