/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:34:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/15 22:34:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_pos	ft_create_pos(double max, double min, double dt, double pos)
{
	t_pos rs;

	rs.max = FT_MAX(max, min);
	rs.min = FT_MIN(max, min);
	rs.dt = dt;
	rs.pos = pos;
	return (rs);
}
