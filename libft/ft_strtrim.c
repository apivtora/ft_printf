/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 20:42:58 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 15:13:56 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_fbeg(const char *s, int i)
{
	int beg;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	beg = i;
	return (beg);
}

static int		ft_fend(const char *s, int i, int beg)
{
	int end;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	if (i < beg)
		end = beg;
	else
		end = i;
	return (end);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		beg;
	int		end;
	char	*new_s;

	i = 0;
	new_s = NULL;
	if (s)
	{
		beg = ft_fbeg(s, i);
		while (s[i + 1])
			i++;
		end = ft_fend(s, i, beg);
		new_s = (char*)malloc(sizeof(*new_s) * (end - beg + 2));
		if (!new_s)
			return (NULL);
		i = 0;
		while (beg + i <= end)
		{
			new_s[i] = s[i + beg];
			i++;
		}
		new_s[i] = '\0';
	}
	return (new_s);
}
