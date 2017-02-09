# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apivtora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/09 11:21:10 by apivtora          #+#    #+#              #
#    Updated: 2017/02/09 12:44:13 by apivtora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_printf.h

FlAG = -Wall -Werror -Wextra

OBJ = ft_flags_imp.o ft_putchar_u.o ft_if_type.o ft_putstr_u.o ft_llitoa.o ft_size_u.o ft_all_d.o ft_print.o ft_wstrsize.o ft_color.o ft_printf.o ft_count_len.o ft_printf.o ft_flags_create.o ft_put_w.o ft_atoi.o ft_llitoua_base.o ft_memalloc.o ft_putstr.o ft_ullitoa.o ft_strlen.o

SRC = ft_flags_imp.c ft_putchar_u.c ft_if_type.c ft_putstr_u.c ft_llitoa.c ft_size_u.c ft_all_d.c ft_print.c ft_wstrsize.c ft_color.c ft_printf.c ft_count_len.c ft_printf.h ft_flags_create.c ft_put_w.c ft_atoi.c ft_llitoua_base.c ft_memalloc.c ft_putstr.c ft_ullitoa.c ft_strlen.c

NAME = libftprintf.a

all: $(NAME)

.o: %.c 
	gcc -o $@ -c $< $(FLAGS)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) $(HEADER)

clean:
	    rm -f $(OBJ)

fclean: clean
	    rm -f $(NAME)

re: fclean all
