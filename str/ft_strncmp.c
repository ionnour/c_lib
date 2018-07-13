/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:11:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/09/12 14:11:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t count)
{
	while (count > 0)
	{
		if (*s1 != *s2)
			return ((*(unsigned char *)s1 - *(unsigned char *)s2));
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		count--;
	}
	return (0);
}
