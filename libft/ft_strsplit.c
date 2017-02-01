/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 11:50:23 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 15:12:01 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_w(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int		ft_count_l(const char *s, char c, int i)
{
	int count;

	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static int		ft_put_l(const char *s, char c, char *arr, int i)
{
	int k;

	k = 0;
	while (s[i] != c && s[i] != '\0')
	{
		arr[k] = s[i];
		i++;
		k++;
	}
	arr[k] = '\0';
	return (i);
}

static int		ft_put_w(const char *s, char c, char **arr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		arr[j] = (char *)malloc(sizeof(**arr) * (ft_count_l(s, c, i) + 1));
		if (!arr[j])
			return (0);
		i = ft_put_l(s, c, arr[j], i);
		j++;
	}
	arr[j] = NULL;
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	char **arr;

	arr = NULL;
	if (s)
	{
		arr = (char **)malloc(sizeof(*arr) * (ft_count_w(s, c) + 1));
		if (!arr)
			return (NULL);
		if (ft_put_w(s, c, arr) == 0)
		{
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
