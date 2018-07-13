/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 13:54:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/17 13:54:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_freestab(char **tab)
{
	char	**swap;

	swap = tab;
	while (*tab)
		ft_memdel((void *)(tab++));
	ft_memdel((void *)&swap);
}
