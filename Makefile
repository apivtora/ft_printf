# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apivtora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/21 10:11:01 by apivtora          #+#    #+#              #
#    Updated: 2017/02/08 15:09:11 by apivtora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clear
	gcc -c *.c libft/libft.a
	ar rc libftprintf.a *.o ft_printf.h libft/libft.h libft/libft.a

clean:
	rm  -rf *.o && rm -rf  libft/*.o
fclean: clean
	rm -rf libftprintf.a  && rm -rf libft/libft.a
re: fclean all
