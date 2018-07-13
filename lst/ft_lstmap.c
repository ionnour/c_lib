/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/09 20:05:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/09 20:05:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rs;
	t_list	*list;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	rs = f(lst);
	list = ft_lstnew(rs->content, rs->content_size);
	if (!list)
		return (NULL);
	tmp = list;
	lst = lst->next;
	while (lst)
	{
		rs = f(lst);
		list->next = ft_lstnew(rs->content, rs->content_size);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
		lst = lst->next;
	}
	return (tmp);
}
