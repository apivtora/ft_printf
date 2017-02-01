/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 22:08:19 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:49:06 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	size_t i;
	size_t new;

	i = 0;
	new = 0;
	while (dest[i] != '\0')
		i++;
	while (src[new] != '\0' && i + new + 1 < count)
	{
		dest[i + new] = src[new];
		new++;
	}
	dest[i + new] = '\0';
	while (src[new] != '\0')
		new++;
	if (i > count)
		i = count;
	return (new + i);
}
