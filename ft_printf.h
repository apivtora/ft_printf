/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:12:31 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/04 16:44:54 by apivtora         ###   ########.fr       */
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
	wchar_t		*line2;
}				t_flags;
t_flags			*ft_flags_create(t_flags *flags);
void			ft_flags_imp(t_flags *flags);
int				ft_print(t_flags *flags);
int				ft_if_type(char c);
int				ft_if_digital(char c);
char			*ft_llitoa(intmax_t n);
void			ft_all_d(t_flags *flags, char c, va_list argptr);
int				ft_putchar_u(wchar_t c);
int				ft_putstr_u(const wchar_t *u_str);
int				ft_wstrsize(wchar_t *w_str);
int				ft_count_len(t_flags *flags);
int				ft_size_u(wchar_t c);
int				ft_put_w(t_flags *flags);

#endif
