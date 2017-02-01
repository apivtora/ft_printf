/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:40:43 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:50:02 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	new_s = NULL;
	if (s)
	{
		while (s[i])
			i++;
		new_s = (char *)malloc(sizeof(*new_s) * i + 1);
		if (!new_s)
			return (NULL);
		i = 0;
		while (s[i])
		{
			new_s[i] = f(i, s[i]);
			i++;
		}
		new_s[i] = '\0';
	}
	return (new_s);
}
