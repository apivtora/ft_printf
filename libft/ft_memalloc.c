/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:11:12 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/11 12:41:13 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*temp;
	size_t			i;
	void			*mall;

	mall = (void*)malloc(sizeof(void *) * size);
	i = 0;
	if (mall == NULL)
		return (NULL);
	temp = mall;
	while (i < size)
	{
		temp[i] = '\0';
		i++;
	}
	return (mall);
}
