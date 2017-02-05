/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_w.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 16:31:13 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/04 16:44:59 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_w(t_flags *flags)
{
	int i;
	int size;
	int temp;

	i = 0;
	size = 0;
	while (flags->line2[i])
	{
		temp = ft_size_u(flags->line2[i]);
		if (size + temp > flags->dot)
			return (size);
		size = size + ft_putchar_u(flags->line2[i]);
		i++;
	}
	return(size);
}

