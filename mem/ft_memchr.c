/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 13:06:12 by amalcoci          #+#    #+#             */
/*   Updated: 2016/09/09 13:06:19 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *src, int c, size_t count)
{
	size_t	i;
	void	*rs;

	i = 0;
	rs = (void *)src;
	while (i < count)
	{
		if (((char*)src)[i] == (char)c)
			return (rs + i);
		i++;
	}
	return (NULL);
}
