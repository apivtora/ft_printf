/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:37:45 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/04 13:05:56 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, int nb)
{
	int i;
	int new;

	i = 0;
	new = 0;
	while (dest[i] != '\0')
		i++;
	while (src[new] != '\0' && new < nb)
	{
		dest[i + new] = src[new];
		new++;
	}
	dest[i + new] = '\0';
	return (dest);
}
