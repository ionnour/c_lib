/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstddelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:22:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/04 14:22:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstddelone(t_list **alst)
{
	if (!alst || !*alst)
		return ;
	ft_memdel(&(*alst)->content);
	ft_memdel((void **)alst);
}
