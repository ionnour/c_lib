/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:51:04 by amalcoci          #+#    #+#             */
/*   Updated: 2016/08/22 14:51:09 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_memswap(void *a, void *b, size_t size)
{
	void *c;

	c = ft_memalloc(size);
	ft_memcpy(c, a, size);
	ft_memcpy(a, b, size);
	ft_memcpy(b, c, size);
	ft_memdel(&c);
}
