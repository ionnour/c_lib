/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strealloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:58:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/01 18:58:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char			*ft_strealloc(char **pstr, size_t size)
{
	char	*rs;

	rs = ft_strnew(size);
	if (rs)
	{
		ft_strcpy(rs, *pstr);
		ft_strdel(pstr);
		*pstr = rs;
	}
	return (rs);
}
