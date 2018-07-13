/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:32:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/09/16 11:32:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstsort(t_list **list,int (*f)(void*,void*))
{
	t_list *tmp;
	t_list *rt;

	tmp = *list;
	while(tmp)
	{
		rt = tmp->next;
		while (rt)
		{
			if (f(tmp->content,rt->content) < 0)
				ft_lstswap(&tmp, &rt);
			rt = rt->next;
		}
		tmp = tmp->next;
	}
}