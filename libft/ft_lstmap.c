/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apivtora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 15:17:23 by apivtora          #+#    #+#             */
/*   Updated: 2016/12/07 15:20:08 by apivtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *begin;
	t_list *fresh;

	begin = NULL;
	if (lst)
	{
		fresh = (t_list*)malloc(sizeof(*f(lst)));
		if (!fresh)
			return (fresh);
		fresh = f(lst);
		begin = fresh;
		while (lst->next)
		{
			fresh->next = (t_list*)malloc(sizeof(*f(lst->next)));
			fresh->next = f(lst->next);
			fresh = fresh->next;
			lst = lst->next;
		}
		fresh->next = NULL;
	}
	return (begin);
}
