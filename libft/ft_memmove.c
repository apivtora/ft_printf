/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:45:31 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:37:41 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t		i;
	char		*new_dest;
	const char	*new_src;

	new_dest = dest;
	new_src = src;
	i = 0;
	if (dest >= src && dest <= src + num)
	{
		while (num)
		{
			new_dest[num - 1] = new_src[num - 1];
			num--;
		}
	}
	else
	{
		while (i < num)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	return (dest);
}
