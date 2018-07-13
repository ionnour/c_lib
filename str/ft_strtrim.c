/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 19:31:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/07 19:31:30 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strtrim(char const *str)
{
	size_t		start;
	size_t		end;
	size_t		len;

	start = 0;
	len = 0;
	if (str != NULL)
	{
		while (start < ft_strlen(str) && ft_is_space(str[start]))
			start++;
		end = ft_strlen(str) - 1;
		while (end > start && ft_is_space(str[end]))
			end--;
		len = end - start + 1;
	}
	return (ft_strsub(str, start, len));
}
