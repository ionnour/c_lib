/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:43:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/11/09 13:43:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static t_rgb	get_color(t_rgb a, t_rgb b, t_pos position)
{
	double		pos;
	double		max;
	t_rgb		rs;

	pos = (position.pos - position.min) / position.dt;
	max = (position.max - position.min) / position.dt;
	pos /= max;
	rs.r = (unsigned char)(a.r + (b.r - a.r) * pos);
	rs.b = (unsigned char)(a.b + (b.b - a.b) * pos);
	rs.g = (unsigned char)(a.g + (b.g - a.g) * pos);
	return (rs);
}

static void		ft_linex(t_line l, void *data,
							double dt, void (*draw)(t_point, void*))
{
	double		a;
	double		b;
	double		i;

	a = (l.a.y - l.b.y) / (l.a.x - l.b.x);
	b = l.a.y - a * l.a.x;
	if (l.a.x > l.b.x)
		ft_memswap(&l.a, &l.b, sizeof(t_point));
	i = l.a.x;
	while (i <= l.b.x)
	{
		draw(ft_create_point(i, a * i + b, get_color(l.a.color,
				l.b.color, ft_create_pos(l.a.x, l.b.x, dt, i))), data);
		i += dt;
	}
}

static void		ft_liney(t_line l, void *data,
							double dt, void (*draw)(t_point, void*))
{
	double		a;
	double		b;
	double		i;

	a = (l.a.x - l.b.x) / (l.a.y - l.b.y);
	b = l.a.x - a * l.a.y;
	if (l.a.y > l.b.y)
		ft_memswap(&l.a, &l.b, sizeof(t_point));
	i = l.a.y;
	while (i <= l.b.y)
	{
		draw(ft_create_point(a * i + b, i, get_color(l.a.color,
				l.b.color, ft_create_pos(l.a.y, l.b.y, dt, i))), data);
		i += dt;
	}
}

void			pas2(t_line l, void *data,
					double dt, void (*draw)(t_point, void*))
{
	double		i;

	if (l.a.x > l.b.x)
		ft_memswap(&l.a, &l.b, sizeof(t_point));
	i = l.a.x;
	while (i <= l.b.x)
	{
		draw(ft_create_point(i, l.a.y, get_color(l.a.color,
				l.b.color, ft_create_pos(l.a.x, l.b.x, dt, i))), data);
		i += dt;
	}
}

void			ft_line(t_line l, void *data, double dt,
						void (*draw)(t_point, void*))
{
	double		i;

	if (l.a.x == l.b.x)
	{
		if (l.a.y == l.b.y)
		{
			draw(l.a, data);
			return ;
		}
		else if (l.a.y > l.b.y)
			ft_memswap(&l.a, &l.b, sizeof(t_point));
		i = l.a.y;
		while (i <= l.b.y)
		{
			draw(ft_create_point(l.a.x, i, get_color(l.a.color,
				l.b.color, ft_create_pos(l.a.y, l.b.y, dt, i))), data);
			i += dt;
		}
	}
	else if (l.a.y == l.b.y)
		pas2(l, data, dt, draw);
	else if (FT_ABS(l.a.x - l.b.x) > FT_ABS(l.a.y - l.b.y))
		ft_linex(l, data, dt, draw);
	else
		ft_liney(l, data, dt, draw);
}
