/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:45:37 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:28:17 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static unsigned int	ft_neg(int n)
{
	unsigned int numb;

	if (n < 0)
		numb = n * (-1);
	else
		numb = n;
	return (numb);
}

char				*ft_itoa(int n)
{
	int				i;
	unsigned int	numb;
	char			rev[11];
	char			*final;

	i = 0;
	numb = ft_neg(n);
	while (numb / 10 > 0)
	{
		rev[i] = numb % 10 + '0';
		numb = numb / 10;
		i++;
	}
	rev[i] = numb % 10 + '0';
	if (n < 0)
	{
		i++;
		rev[i] = '-';
	}
	final = (char *)malloc(sizeof(*final) * (i + 2));
	if (!final)
		return (NULL);
	ft_rev(rev, final, i);
	return (final);
}
