/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:41:19 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:43:06 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int symb)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == symb)
			return ((char *)str + i);
		i++;
	}
	if (symb == '\0')
		return ((char *)str + i);
	else
		return (NULL);
}
