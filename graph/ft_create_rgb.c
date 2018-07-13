/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rgb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:31:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/15 11:31:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_rgb	ft_create_rgb(int i)
{
	t_rgb s;

	s.b = (unsigned char)(i % 256);
	i = i >> 8;
	s.g = (unsigned char)(i % 256);
	i = i >> 8;
	s.r = (unsigned char)(i % 256);
	return (s);
}
