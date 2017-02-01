/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:00:46 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/03 13:25:44 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void				ft_putnbr_fd(int n, int fd)
{
	int				i;
	unsigned int	numb;
	char			rev[11];

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
	while (i >= 0)
	{
		write(fd, &rev[i], 1);
		i--;
	}
}
