/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:51:04 by amalcoci          #+#    #+#             */
/*   Updated: 2016/08/22 14:51:09 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

int		main(void)
{
	FILE *f= fopen("main.c","r");
	FILE *t= fopen("test.txt","w");
	char *str;
	get_next_line(fileno(f), &str);
	ft_printf("%s",str);
	ft_printf_fd(fileno(t),"%s",str);
	fclose(f);
	fclose(t);
}
