/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 20:18:40 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/04 11:46:03 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int first;

	i = 0;
	while (str[i] != '\0')
	{
		first = 0;
		while (to_find[first] == str[i + first] && to_find[first] != '\0')
			first++;
		if (to_find[first] == '\0')
			return ((char *)str + i);
		i++;
	}
	if (str[0] == '\0' && to_find[0] == '\0')
		return ((char *)str);
	return (0);
}
