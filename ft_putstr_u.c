/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:00:07 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/03 12:18:42 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr_u(const wchar_t *u_str)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (u_str[i])
	{
		ret = ret + ft_putchar_u(u_str[i]);
		i++;
	}
	return(ret);
}
