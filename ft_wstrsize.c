/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 12:27:11 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/08 15:48:40 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wstrsize(wchar_t *w_str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (w_str[i])
	{
		if (w_str[i] < 128)
			size = size + 1;
		else if (w_str[i] > 127 && w_str[i] < 0x0800)
			size = size + 2;
		else if ((w_str[i] > 0x07ff) && w_str[i] < 0x10000)
			size = size + 3;
		else if (w_str[i] > 0xFFFF && w_str[i] < 110000)
			size = size + 4;
		i++;
	}
	return (size);
}
