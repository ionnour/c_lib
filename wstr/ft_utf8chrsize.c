/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8chrsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:39:00 by amalcoci          #+#    #+#             */
/*   Updated: 2017/03/22 18:39:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char						ft_utf8chrsize(wchar_t c)
{
	if ((unsigned int)c < 0xFF)
		return (1);
	else if ((unsigned int)c < 0xFFFF)
		return (2);
	else if ((unsigned int)c < 0xFFFFFF)
		return (3);
	else if ((unsigned int)c < 0xFFFFFFFF)
		return (4);
	else
		return (-1);
}