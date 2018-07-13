/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:51:04 by amalcoci          #+#    #+#             */
/*   Updated: 2016/08/22 14:51:09 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	char	*tmp;
	size_t	i;

	tmp = (char*)dest;
	i = 0;
	while (i < count)
	{
		tmp[i] = (char)ch;
		i++;
	}
	return (dest);
}
