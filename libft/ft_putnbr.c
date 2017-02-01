/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:45:37 by apivtora          #+#    #+#             */
/*   Updated: 2017/01/19 15:01:05 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static unsigned int	ft_neg(int n)
{
	unsigned int numb;

	if (n < 0)
		numb = n * (-1);
	else
		numb = n;
	return (numb);
}

int					ft_putnbr(int n)
{
	int				i;
	unsigned int	numb;
	char			rev[11];
	int				ret;

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
	ret = i + 1;
	while (i >= 0)
	{
		write(1, &rev[i], 1);
		i--;
	}
	return (ret);
}
