/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 19:31:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/07 19:31:30 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char*)s1;
	i = 0;
	if (ft_memcmp("\0", s2, 1) == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (s2[j] == str[i + j])
		{
			if (!(s2[j + 1]))
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
