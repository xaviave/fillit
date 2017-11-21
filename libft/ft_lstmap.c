/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:20:32 by llegros           #+#    #+#             */
/*   Updated: 2017/11/13 11:46:01 by llegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*modif;
	t_list	*elem;

	if ((!lst && f))
		return (NULL);
	elem = f(lst);
	if (!(new = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	lst = lst->next;
	modif = new;
	while (lst)
	{
		elem = f(lst);
		if (!(new->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (modif);
}
