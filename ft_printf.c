/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 10:15:17 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/04 14:48:54 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>///////////////////////////////////////////////

void ft_types(va_list argptr, char form, t_flags *flags)
{
	flags->letter = form;
	if (form == 'p')                     // возможно стоит перенести в друю ф-ю
	{
		flags->hash = 1;
		flags->size[0] = 'l';
		flags->letter ='x';
		ft_all_d(flags, 'x' , argptr); ///
	}
	else if (ft_if_digital(form))
		ft_all_d(flags, form , argptr);
	else if (form == 's')
	{
		flags->line = va_arg(argptr, char*);
		flags->type = 's';
	}
	else if (form == 'S')
	{
		flags->line2 = va_arg(argptr, wchar_t*);
		flags->type = 'C';
	}
	else if (form == 'c')
	{
		flags->line = ft_memalloc(5);
		flags->line[0] = va_arg(argptr, int);
		flags->type = 's';
	}
	else if (form == 'C')
	{
		flags->line = ft_memalloc(5);
		flags->line[0] = va_arg(argptr, wchar_t);
		flags->type = 'C';
	}

}

int ft_ifflag(char f)// можно заменить одним if
{
	int i;
	char *flags = "+-#0. 123456789lhjz";

	i = 0;
	while (flags[i])
	{
		if (f == flags[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_flags_read(const char *format, t_flags *flags)
{
	int i;

	i = 1;
	while (format[i] && ft_ifflag(format[i]))
	{
		if (format[i] == '-')
			flags->minus = 1;
		else if (format[i] == '+')
			flags->plus = 1;
		else if (format[i] == ' ')
			flags->space = 1;
		else if (format[i] == '#')
			flags->hash = 1;
		else if (format[i] == '0')
			flags->zero = 1;
		else if (format[i] == '.')
		{
			flags->dot = ft_atoi((char *)(format + i + 1));////////////////
			while (format[i+1] >= '0' && format[i+1] <= '9')
				i++;
		}
		else if (format[i] > '0' && format[i] <= '9')
		{
			flags->num = ft_atoi((char *)(format + i));////////////////
			while (format[i+1] >= '0' && format[i+1] <= '9')
				i++;
		}
		else if (format[i] == 'l' && flags->size[0] != 'z')
		{
			if (flags->size[0] == 'l')
				flags->size[1] = 'l';
			else 
				flags->size[0] = 'l';
		}
		else if (format[i] == 'h' && flags->size[0] != 'z' && flags->size[0] != 'l' && flags->size[0] != 'j')
		{
			if (flags->size[0] == 'h')
				flags->size[1] = 'h';
			else 
				flags->size[0] = 'h';
		}
		else if (format[i] == 'j' && flags->size[0] != 'z')
				flags->size[0] = 'j';
		else if (format[i] == 'z')
				flags->size[0] = 'z';
		i++;
	}
	return (i);
}



int ft_printf(const char *format, ...)
{
	int r_nbr;
	int i;
	va_list argptr;
	t_flags *flags;

	va_start(argptr, format);
	flags = NULL;
	r_nbr = 0;
	i = 0;
	flags = ft_flags_create(flags);
	while (format[i])
	{
		if (format[i] == '%')
		{
			flags = ft_flags_create(flags);
			i = i + ft_flags_read(format + i, flags);
			ft_types(argptr, format[i], flags);
			if ( !(ft_if_type(format[i])) && format[i])
			{
				flags->line = ft_memalloc(2);
				flags->line[0] = format[i];
				flags->type = 's';
			}
		}
		if (flags->line || flags->line2)
			{
				ft_flags_imp(flags);
				r_nbr = r_nbr + ft_print(flags);
			}
		else if (format[i])
		{
			write(1, &format[i], 1);
			r_nbr++;
		}
		if (format[i]) // КОСТЫЛЬ!!!!
			i++;
	}
	va_end(argptr);
	return(r_nbr);
}
