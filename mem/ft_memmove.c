/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:00:03 by amalcoci          #+#    #+#             */
/*   Updated: 2016/08/22 15:00:16 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t	i;

	if (count == 0)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, count);
	}
	else
	{
		i = count - 1;
		while (i > 0)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i--;
		}
		((char*)dest)[i] = ((char*)src)[i];
	}
	return (dest);
}
