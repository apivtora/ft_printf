/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:12:31 by apivtora          #+#    #+#             */
/*   Updated: 2017/01/30 15:22:43 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include "libft/libft.h"
#include <limits.h>


typedef struct	s_flags
{
	int			minus;
	int			plus;
	int			space;
	int			hash;
	int			zero;
	int			num;
	int			dot;
	char		*line;
	char		type;
	char		sign;
	char		*line_pre;
	char		*line_post;
	char		size[2];
	char		letter;
}				t_flags;
t_flags			*ft_flags_create(t_flags *flags);
void			ft_flags_imp(t_flags *flags);
int				ft_print(t_flags *flags);
int				ft_if_type(char c);
int				ft_if_digital(char c);
char			 *ft_llitoa(intmax_t n);
void ft_all_d(t_flags *flags, char c, va_list argptr);

#endif
