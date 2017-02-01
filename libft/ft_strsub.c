/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:13:32 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/04 13:27:40 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	sub_s = NULL;
	i = 0;
	if (s)
	{
		sub_s = (char *)malloc(sizeof(*sub_s) * len + 1);
		if (!sub_s)
			return (NULL);
		while (s[start] && i < len)
		{
			sub_s[i] = s[start];
			start++;
			i++;
		}
		sub_s[i] = '\0';
	}
	return (sub_s);
}
