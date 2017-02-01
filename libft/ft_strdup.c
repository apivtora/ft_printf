/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:06:33 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:47:44 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*buffer;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	buffer = (char*)malloc(sizeof(*buffer) * i + 1);
	if (buffer == (char*)0)
		return ((char*)0);
	i = 0;
	while (src[i] != '\0')
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
