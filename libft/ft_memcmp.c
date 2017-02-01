/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 21:47:02 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 12:34:36 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t count)
{
	size_t				i;
	const unsigned char	*new_src1;
	const unsigned char	*new_src2;

	i = 0;
	new_src1 = src1;
	new_src2 = src2;
	if (count == 0)
		return (0);
	while (new_src1[i] == new_src2[i] && i + 1 < count)
		i++;
	return (new_src1[i] - new_src2[i]);
}
