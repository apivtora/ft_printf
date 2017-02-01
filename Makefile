# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apivtora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/21 10:11:01 by apivtora          #+#    #+#              #
#    Updated: 2017/02/01 16:17:09 by apivtora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clear
	gcc -c *.c libft/*.c
	ar rc libftprintf.a *.o ft_printf.h libft/libft.h libft/libft.a

clean:
	rm  -rf *.o && rm -rf  libft/*.o

fclean: clean
	rm -rf libftprintf.a  && rm -rf libft/libft.a
