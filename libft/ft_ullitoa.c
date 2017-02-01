/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:45:37 by apivtora          #+#    #+#             */
/*   Updated: 2017/01/27 15:35:27 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
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

char				*ft_ullitoa(unsigned long long n)
{
	int				i;
	uintmax_t	numb;
	char			rev[20];
	char			*final;

	i = 0;
	numb = n;
	
	while (numb / 10 > 0)
	{
		rev[i] = numb % 10 + '0';
		numb = numb / 10;
		i++;
	}
	rev[i] = numb % 10 + '0';
	final = (char *)malloc(sizeof(*final) * (i + 2));
	if (!final)
		return (NULL);
	ft_rev(rev, final, i);
	return (final);
}
