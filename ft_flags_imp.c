/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_imp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:29:29 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/09 11:19:32 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_line_pre(t_flags *flags, int nbr, char symb)
{
	int		i;
	char	*new;

	i = 0;
	new = ft_memalloc(flags->num - nbr + 1);
	while (flags->num - (nbr + i) > 0)
	{
		new[i] = symb;
		i++;
	}
	return (new);
}

static char	*ft_zero(t_flags *flags, int nbr)
{
	char	symb;

	symb = ' ';
	if (((flags->zero && flags->num - nbr > 0) || flags->dot - nbr > 0)
			&& (flags->letter == 'o' || flags->letter == 'O'))
		flags->letter = 'd';
	if (flags->dot - nbr > 0 && flags->type == 'd')
		nbr = flags->dot;
	if (flags->zero)
		symb = '0';
	if (flags->hash && (flags->letter == 'x' || flags->letter == 'X'
				|| flags->letter == 'p'))
		nbr = nbr + 2;
	if (flags->space && flags->type != 's')
		nbr++;
	if (flags->sign == '-' || (flags->plus &&
				(flags->letter == 'd' || flags->letter == 'D')))
		nbr++;
	if (flags->hash && (flags->letter == 'o' || flags->letter == 'O'))
		nbr++;
	return (ft_line_pre(flags, nbr, symb));
}

void		ft_flags_imp(t_flags *flags)
{
	int		i;

	i = 0;
	ft_if_u(flags);
	if (flags->line)
		i = ft_strlen(flags->line);
	else
		i = ft_wstrsize(flags->line2);
	if (flags->minus || ((flags->dot >= 0) && flags->type == 'd'))
		flags->zero = 0;
	if ((flags->dot >= 0) && flags->type == 's' && flags->dot < i)
		i = flags->dot;
	else if ((flags->dot >= 0) && flags->type == 'C')
		i = ft_count_len(flags);
	if ((flags->letter == 'c' && flags->line[0] == 0) ||
			(flags->letter == 'C' && flags->line2[0] == 0))
		i++;
	if (flags->num - i > 0)
		flags->line_pre = ft_zero(flags, i);
	if (flags->minus)
	{
		flags->line_post = flags->line_pre;
		flags->line_pre = NULL;
	}
}
