/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoua_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 17:43:00 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/09 12:41:44 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char ft_numb(int numb)
{
	char new[] = "0123456789abcdef";
	return (new[numb]);
}

char	*ft_llitoua_base(uintmax_t value, int base)
{
	int i;
	int j;
	char rev[100];
	char *final;

	i = 0;
	while (value / base != 0)
	{
		rev[i] = ft_numb((value % base));
		value = (value / base);
		i++;
	}
	rev[i] = ft_numb((value % base));
	final = (char*)malloc(100);
	j = 0;
	while (i >= 0)
	{
		final[j] = rev[i];
		i--;
		j++;
	}
	final[j] = '\0';
	return (final);
}
