/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:26:27 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:35:35 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t		i;
	char		*new_dest;
	const char	*new_src;

	i = 0;
	new_dest = dest;
	new_src = src;
	while (i < count)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (dest);
}
