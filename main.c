/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 10:16:17 by apivtora          #+#    #+#             */
/*   Updated: 2017/02/08 16:42:06 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include <limits.h>
#include <wchar.h>
#include "ft_printf.h"
#include <locale.h>
#define PRINTF_INPUT "% d", -42

int ft_printf(const char *format, ...);

int main()
{
	wchar_t c[] =  /*L"𐩠𐩡𐩢𐩣𐩤";*/{ 0x10A60, 0x10A61, 0x10A62, 0x10A63, 0x10A64, 0x10A65, 0x00A1,  0};
//	char happy[] = { 209, 139 };
//	ft_putstr_u(c);
		
	setlocale(LC_ALL, "en_US.UTF-8");
	char *line1 = "my first test\nwith some lines\nof diff size\n\nend";
	char *line2 = "sec test\njust to test with few arg\n";
	unsigned long line3[6] = {1, 275, -10, -455777, 6, LONG_MAX}; 
	char *line4 = "line";
	printf("\n====\n%d\n====\n", ft_printf (PRINTF_INPUT));
	printf("------------/Original_lower/-----------------\n");
	printf("\n====\n%d\n====\n", printf (PRINTF_INPUT));

	return (0);
}
