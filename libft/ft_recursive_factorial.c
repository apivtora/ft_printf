/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 23:24:17 by apivtora          #+#    #+#             */
/*   Updated: 2016/10/29 12:35:18 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int n;

	if (nb == 0)
		return (1);
	if (nb > 0 && nb < 13)
	{
		n = nb * ft_recursive_factorial(nb - 1);
		return (n);
	}
	else
		return (0);
}
