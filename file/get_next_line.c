/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:47:00 by amalcoci          #+#    #+#             */
/*   Updated: 2016/10/31 17:47:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"
#include "../includes/libft.h"

static int		lastjoin(int fd, char **dest, char *adr, t_list **history)
{
	char				*tmp;
	char				*tmp2;
	t_get_next_history	*h;

	tmp = ft_strnew(ft_strlen(*dest));
	tmp2 = ft_strnew(ft_strlen(adr));
	ft_strncpy(tmp, *dest, adr - *dest);
	ft_strcpy(tmp2, adr + 1);
	if (*tmp2)
	{
		h = ft_memalloc(sizeof(t_get_next_history));
		h->fd = fd;
		h->cache = tmp2;
		ft_lstadd(history, ft_lstnew(h, sizeof(t_get_next_history)));
		ft_memdel((void**)&h);
	}
	else
		ft_strdel(&tmp2);
	ft_strdel(dest);
	*dest = tmp;
	return (1);
}

static char		*find(int fd, t_list **history)
{
	t_list				*list;
	t_list				*prev;
	char				*rs;
	t_get_next_history	*h;

	list = *history;
	prev = NULL;
	while (list)
	{
		h = list->content;
		if (h->fd == fd)
		{
			rs = ft_strdup(h->cache);
			if (prev)
				prev->next = list->next;
			else
				*history = list->next;
			ft_strdel(&h->cache);
			ft_lstddelone(&list);
			return (rs);
		}
		prev = list;
		list = list->next;
	}
	return (NULL);
}

static int		on_history(int fd, char **line, char **src, t_list **history)
{
	char *adr;

	ft_strdel(src);
	if (*line)
	{
		if ((adr = ft_strchr(*line, '\n')))
			return (lastjoin(fd, line, adr, history));
		return (1);
	}
	return (0);
}

static int		on_error(int fd, char **line, t_list **history)
{
	find(fd, history);
	if (line)
		ft_strdel(line);
	return (-1);
}

int				get_next_line(int const fd, char **line)
{
	char			*str;
	char			*adr;
	int				i;
	static t_list	*history = NULL;

	if (fd < 0 || !line)
		return (on_error(fd, NULL, &history));
	*line = NULL;
	str = ft_strnew(BUFF_SIZE);
	if (!str)
		return (on_error(fd, line, &history));
	*line = find(fd, &history);
	while ((i = read(fd, str, BUFF_SIZE)))
	{
		*line = ft_strjoin2(line, &str);
		str = ft_strnew(BUFF_SIZE);
		if (!str || i < 0)
			return (on_error(fd, line, &history));
		if ((adr = ft_strchr(*line, '\n')))
		{
			ft_strdel(&str);
			return (lastjoin(fd, line, adr, &history));
		}
	}
	return (on_history(fd, line, &str, &history));
}
