/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf8chrencode.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:42:00 by amalcoci          #+#    #+#             */
/*   Updated: 2017/03/22 18:42:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/wstr.h"

static inline wchar_t		bem_encode(unsigned int c, char size)
{
	if (size <= UTF8_BITSNBR2)
		return ((((c >> 6) << 27) >> 19) | ((c << 26) >> 26) | UTF8_BEM_MASK2);
	else if (size <= UTF8_BITSNBR3)
		return ((((c >> 12) << 28) >> 12) | (((c >> 6) << 26) >> 18)
				| ((c << 26) >> 26) | UTF8_BEM_MASK3);
	else if (size <= UTF8_BITSNBR4)
		return ((((c >> 18) << 29) >> 5)
				| (((c >> 12) << 26) >> 10)
				| (((c >> 6) << 26) >> 18)
				| ((c << 26) >> 26)
				| UTF8_BEM_MASK4);
	else
		return (UTF8_SUBCHR);
}

static inline wchar_t		lem_encode(unsigned int c, char size)
{
	if (size <= UTF8_BITSNBR2)
		return (((c << 21) >> 27) | ((c << 26) >> 18) | UTF8_LEM_MASK2);
	else if (size <= UTF8_BITSNBR3)
		return (((c << 16) >> 28) | (((c >> 6) << 26) >> 18)
				| ((c << 26) >> 10) | UTF8_LEM_MASK3);
	else if (size <= UTF8_BITSNBR4)
		return (((c << 11) >> 29) | (((c >> 12) << 26) >> 18)
				| (((c >> 6) << 26) >> 10) | ((c << 26) >> 2) | UTF8_LEM_MASK4);
	else
		return (UTF8_SUBCHR);
}

wchar_t						ft_utf8chrencode(wchar_t c)
{
	char		size;
	t_bool		endian;

	size = ft_wchrbin(c);
	if (size <= UTF8_BITSNBR1)
		return (c & 0b01111111);
	endian = ft_getendian();
	if (endian)
		return (bem_encode((unsigned int)c, size));
	else
		return (lem_encode((unsigned int)c, size));
}
