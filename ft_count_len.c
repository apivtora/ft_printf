/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 16:06:05 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/08 15:31:18 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_len(t_flags *flags)
{
	int i;
	int size;
	int temp;

	i = 0;
	size = 0;
	while (flags->line2[i])
	{
		temp = ft_size_u(flags->line2[i]);
		if (flags->dot < size + temp)
			return (size);
		size = size + temp;
		i++;
	}
	return (size);
}
