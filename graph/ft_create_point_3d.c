/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_point_3d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:48:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/07 22:48:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_point_3d		ft_create_point_3d(double x, double y, double z, t_rgb color)
{
	t_point_3d t;

	t.x = x;
	t.y = y;
	t.z = z;
	t.color = color;
	return (t);
}
