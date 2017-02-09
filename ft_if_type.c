/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 15:51:40 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/08 16:36:37 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_if_type(char c)
{
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' || c == 'D' || c == 'i' ||
			c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'x' ||
			c == 'X' || c == 'c' || c == 'C' || c == 'b')
		return (1);
	return (0);
}

int	ft_if_digital(char c)
{
	if (c == 'd' || c == 'i' || c == 'D' || c == 'u' || c == 'U' || c == 'o'
			|| c == 'O' || c == 'x' || c == 'X' || c == 'b')
		return (1);
	return (0);
}

int	ft_if_u(t_flags *flags)
{
	if (flags->plus || flags->sign == '-' || flags->letter == 'u' ||
			flags->letter == 'U' || flags->letter == 'x' ||
			flags->letter == 'X' || flags->letter == 'o' ||
			flags->letter == 'O' || flags->letter == 'p')
		flags->space = 0;
	return (0);
}
