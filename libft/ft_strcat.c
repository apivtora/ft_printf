/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:33:41 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/04 13:01:54 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int new;

	i = 0;
	new = 0;
	while (dest[i] != '\0')
		i++;
	while (src[new] != '\0')
	{
		dest[i + new] = src[new];
		new++;
	}
	dest[i + new] = '\0';
	return (dest);
}
