/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3d_to_2d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:27:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/10 11:27:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_point	ft_3d_to_2d(t_point_3d a, t_point p)
{
	t_point rs;

	rs.x = a.x + p.x * a.z;
	rs.y = a.y + p.y * a.z;
	rs.color = a.color;
	return (rs);
}
