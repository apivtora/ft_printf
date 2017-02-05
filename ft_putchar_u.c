/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:43:15 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/03 12:39:51 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int ft_putchar_u(wchar_t c)
{
	char out[5];
	
	if (c < 0x80)
	{
		return (write(1, &c, 1));
	}
	else if (c >127 && c < 0x0800)
	{
		out[0] = ((c >> 6) | 0xC0);
		out[1] = ((c & 0x3F)|0x80);
		return (write (1, out, 2));
	}
	else if ((c > 0x07ff) && c < 0x10000)
	{
		out[0] = ((c >> 12) | 0xE0);
		out[1] = (((c >> 6) & 0x3F)|0x80);
		out[2] = ((c & 0x3F) | 0x80);
		return (write (1, out, 3));
	}
	else if (c > 0xFFFF && c < 110000)
	{
		out[0] = ((c >> 18)) | 0xF0;
		out[1] = ((c >> 12) & 0x3F) | 0x80;
		out[2] = ((c >> 6) & 0x3F) | 0x80;
		out[3] = (c & 0x3F) | 0x80;
		return (write (1, out, 4));
	}
	return (1);
}
