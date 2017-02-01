/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:01:24 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:37:54 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int symb, size_t numb)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = dest;
	while (i < numb)
	{
		temp[i] = symb;
		i++;
	}
	return (dest);
}
