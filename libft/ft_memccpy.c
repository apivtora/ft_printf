/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:44:49 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:33:57 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int symb, size_t count)
{
	size_t		i;
	char		*new_dest;
	const char	*new_src;

	i = 0;
	new_dest = dest;
	new_src = src;
	while (count)
	{
		new_dest[i] = new_src[i];
		if (new_dest[i] == symb)
			return (dest + i + 1);
		i++;
		count--;
	}
	return (NULL);
}
