/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:11:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/09/12 14:11:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	length(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = length(n);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 42;
		len++;
	}
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[--len] = n % 10 + '0';
	while (n /= 10)
		str[--len] = n % 10 + '0';
	if (sign)
		str[0] = '-';
	return (str);
}
