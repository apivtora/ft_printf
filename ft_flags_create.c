/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 14:58:49 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/08 15:51:50 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	*ft_flags_create(t_flags *flags)
{
	if (!flags)
		flags = (t_flags*)malloc(sizeof(*flags));
	flags->minus = 0;
	flags->plus = 0;
	flags->space = 0;
	flags->hash = 0;
	flags->zero = 0;
	flags->num = 0;
	flags->dot = -1;
	flags->size[0] = '\0';
	flags->size[1] = '\0';
	flags->sign = '+';
	flags->line = NULL;
	flags->line2 = NULL;
	flags->line_pre = NULL;
	flags->line_post = NULL;
	flags->letter = '\0';
	flags->color = 0;
	return (flags);
}
