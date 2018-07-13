/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:50:49 by amalcoci          #+#    #+#             */
/*   Updated: 2016/08/22 14:50:52 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin2(char **s1, char **s2)
{
	char	*tmp;

	tmp = ft_strjoin(*s1, *s2);
	ft_strdel(s1);
	ft_strdel(s2);
	return (tmp);
}
