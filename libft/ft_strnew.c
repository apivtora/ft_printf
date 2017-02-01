/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 22:27:10 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:51:16 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	i;

	i = 0;
	fresh = (char*)malloc(sizeof(*fresh) * (size + 1));
	if (!fresh)
		return (NULL);
	while (i <= size)
	{
		fresh[i] = '\0';
		i++;
	}
	return (fresh);
}
