/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 15:36:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/01 15:36:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void			*ft_memrealloc(void **adr, size_t size, size_t count)
{
	void	*mem;

	mem = ft_memalloc(size);
	if (mem)
	{
		ft_memcpy(mem, *adr, count);
		ft_memdel(adr);
		*adr = mem;
	}
	return (mem);
}
