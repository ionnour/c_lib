/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 16:51:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/07 16:51:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int		len;
	char	*s;

	s = (char *)src;
	len = ft_strlen(s);
	while (0 != len && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return (s + len);
	return (NULL);
}
