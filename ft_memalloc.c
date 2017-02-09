/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:11:12 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/09 12:42:22 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
