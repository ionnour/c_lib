/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:32:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/09/16 11:32:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstswap(t_list **a, t_list **b)
{
	t_list *tmp;
	tmp = ft_memalloc(sizeof(t_list));
	tmp->content = (*a)->content;
	tmp->content_size = (*a)->content_size;
	(*a)->content = (*b)->content;
	(*a)->content_size = (*b)->content_size;
	(*b)->content = tmp->content;
	(*b)->content_size = tmp->content_size;
	free(tmp);
}