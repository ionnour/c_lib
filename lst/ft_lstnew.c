/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/09 13:43:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/09 13:43:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void		add_list(t_list **list, void const *content, size_t size)
{
	if ((*list)->content)
	{
		(*list)->content_size = size;
		ft_memcpy((*list)->content, content, size);
	}
	else
		ft_memdel((void **)list);
}

t_list			*ft_lstnew(void const *content, size_t size)
{
	t_list	*newlist;

	newlist = (t_list*)ft_memalloc(sizeof(t_list));
	if (newlist)
	{
		if (content)
		{
			newlist->content = ft_memalloc(size);
			add_list(&newlist, content, size);
		}
		else
		{
			newlist->content = NULL;
			newlist->content_size = 0;
		}
		newlist->next = NULL;
	}
	return (newlist);
}
