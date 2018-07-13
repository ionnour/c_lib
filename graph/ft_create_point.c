/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:48:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/07 22:48:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_point		ft_create_point(double x, double y, t_rgb color)
{
	t_point t;

	t.x = x;
	t.y = y;
	t.color = color;
	return (t);
}
