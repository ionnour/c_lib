/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 12:22:00 by amalcoci          #+#    #+#             */
/*   Updated: 2017/03/20 12:22:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <string.h>
#include <unistd.h>

int		pad(int fd, int size, char c)
{
	int n;

	n = 0;
	while (size > 0)
	{
		n += write(fd, &c, 1);
		size -= 1;
	}
	return (n);
}
