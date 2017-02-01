/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:37:24 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:34:19 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int symb, size_t count)
{
	size_t			i;
	unsigned char	*new_src;

	i = 0;
	new_src = (unsigned char*)src;
	while (i < count)
	{
		if (new_src[i] == (unsigned char)symb)
			return ((void *)src + i);
		i++;
	}
	return (NULL);
}
