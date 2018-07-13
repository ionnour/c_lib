/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perspective.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:43:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/09 13:43:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <math.h>

t_point			ft_perspective(t_point_3d a, t_point_3d c,
								t_point_3d thi, t_point_3d e)
{
	t_point		b;
	t_point_3d	d;

	d.x = cos(thi.y) * (sin(thi.z) * (a.y - c.y) + cos(thi.z) * (a.x - c.x))
		- sin(thi.y) * (a.z - c.z);
	d.y = sin(thi.x) * (cos(thi.y) * (a.z - c.z) + sin(thi.y) * (sin(thi.z)
		* (a.y - c.y) + cos(thi.z) * (a.x - c.x)))
		+ cos(thi.x) * (cos(thi.z) * (a.y - c.y) - sin(thi.z) * (a.x - c.x));
	d.z = cos(thi.x) * (cos(thi.y) * (a.z - c.z) + sin(thi.y) * (sin(thi.z) *
		(a.y - c.y) + cos(thi.z) * (a.x - c.x)))
		- sin(thi.x) * (cos(thi.z) * (a.y - c.y) - sin(thi.z) * (a.x - c.x));
	b.x = e.z * d.x / d.z - e.x;
	b.y = e.z * d.y / d.z - e.y;
	return (b);
}
