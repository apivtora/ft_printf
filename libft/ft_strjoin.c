/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:48:28 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 15:01:03 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	while (s2[i])
		i++;
	return (i);
}

static int		ft_s2(const char *s2, char *join, int i)
{
	int j;

	j = 0;
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	join = NULL;
	if (s1 && s2)
	{
		i = ft_count(s1, s2);
		join = (char *)malloc(sizeof(*join) * i + 1);
		if (!join)
			return (NULL);
		i = 0;
		i = ft_s2(s1, join, i);
		i = ft_s2(s2, join, i);
		join[i] = '\0';
	}
	return (join);
}
