/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:18:57 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 15:19:00 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t numb)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = dest;
	while (i < numb)
	{
		temp[i] = 0;
		i++;
	}
}
