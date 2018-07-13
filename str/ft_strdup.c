/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:45:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/09/16 11:45:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*rs;
	int		len;

	len = ft_strlen(str);
	rs = ft_strnew(len);
	if (rs == NULL)
		return (NULL);
	ft_memcpy(rs, str, len);
	return (rs);
}
