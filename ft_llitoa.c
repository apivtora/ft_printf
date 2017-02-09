/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:45:37 by apivtora          #+#    #+#             */
/*   Updated: 2017/01/28 12:11:10 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"

static void			ft_rev(char *rev, char *final, int i)
{
	int j;

	j = 0;
	while (i >= 0)
	{
		final[j] = rev[i];
		i--;
		j++;
	}
	final[j] = '\0';
}

char				*ft_llitoa(intmax_t numb)
{
	int				i;
	char			rev[20];
	char			*final;
	int				flag;

	i = 0;
	flag = 1;
	if (numb < 0)
		flag = -1;
	while (numb / (10 * flag) > 0)
	{
		rev[i] = (numb % 10) * flag + '0';
		numb = numb / 10;
		i++;
	}
	rev[i] = (numb % 10) * flag + '0';
	final = (char *)malloc(sizeof(*final) * (i + 2));
	if (!final)
		return (NULL);
	ft_rev(rev, final, i);
	return (final);
}
