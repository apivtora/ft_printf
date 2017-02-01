/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:23:12 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:51:37 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t nbr)
{
	size_t i;
	size_t j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0' && i + j < nbr)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	if (str[i] == '\0' && to_find[0] == '\0')
		return ((char *)str + i);
	return (NULL);
}
