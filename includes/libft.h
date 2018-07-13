/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:51:31 by amalcoci          #+#    #+#             */
/*   Updated: 2016/08/22 14:51:36 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FT_ABS(x) ((x) < 0 ? -(x) : (x))
# define FT_MAX(x, y) ((x) > (y) ? (x) : (y))
# define FT_MIN(x, y) ((x) < (y) ? (x) : (y))
# define ISDIGIT(d) ((d) >= '0' && (d) <= '9')
# define CTOD(c) ((c) - '0')
# define DTOC(n)	((n) + '0')
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef enum	e_bool
{
	false = 0,
	true = 1
}				t_bool;

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_rgb
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}				t_rgb;

typedef struct	s_point
{
	double			x;
	double			y;
	t_rgb			color;
}				t_point;

typedef struct	s_point_3d
{
	double			x;
	double			y;
	double			z;
	t_rgb			color;
}				t_point_3d;

typedef struct	s_line
{
	t_point			a;
	t_point			b;
}				t_line;

typedef struct	s_pos
{
	double		pos;
	double		max;
	double		min;
	double		dt;
}				t_pos;

void			*ft_memset(void *dest, int ch, size_t count);
void			ft_bzero(void *dest, size_t count);
void			*ft_memcpy(void *dest, const void *src, size_t count);
void			*ft_memccpy(void *dest, const void *src, int c, size_t count);
void			*ft_memmove(void *dest, const void *src, size_t count);
void			*ft_memchr(const void *src, int c, size_t count);
int				ft_memcmp(const void *s1, const void *s2, size_t count);
void			ft_memswap(void *a, void *b, size_t size);
size_t			ft_strlen(const char *str);
size_t			ft_strnlen(const char *s, size_t maxlen);
char			*ft_strdup(const char *str);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t count);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t count);
size_t			ft_strlcat(char *dest, const char *src, size_t count);
char			*ft_strchr(const char *src, int c);
char			*ft_strrchr(const char *src, int c);
char			*ft_strstr(const char *str, const char *substr);
char			*ft_strnstr(const char *str, const char *substr, size_t count);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t count);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memalloc(size_t size);
void			*ft_memrealloc(void **mem, size_t size, size_t count);
void			ft_memdel(void **mem);
char			*ft_strnew(size_t size);
char			*ft_strealloc(char **pstr, size_t size);
void			ft_strdel(char **pstr);
void			ft_strclr(char *str);
void			ft_striter(char *str, void (*f)(char *));
void			ft_striteri(char *str, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *str, char (*f)(char));
char			*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t count);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strjoin2(char **s1, char **s2);
char			*ft_strtrim(char const *str);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int i);
void			ft_putchar(int c);
void			ft_putstr(char const *str);
void			ft_putendl(char const *str);
void			ft_putnbr(int n);
void			ft_putchar_fd(int c, int fd);
void			ft_putstr_fd(char const *str, int fd);
void			ft_putendl_fd(char const *str, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void const *content, size_t size);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstddelone(t_list **alst);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstswap(t_list **a, t_list **b);
void			ft_lstsort(t_list **list,int (*f)(void*,void*));
int				ft_is_space(char c);
void			ft_freestab(char **tab);
char			*ft_getline(int fd);
int				ft_is(const char	*str, int (*f)(char));
void			ft_line(t_line line, void *data,
						double dt, void (*draw)(t_point, void*));
t_rgb			ft_create_rgb(int i);
int				ft_rgb_to_int(t_rgb rgb);
t_point			ft_create_point(double x, double y, t_rgb color);
t_line			ft_create_line(t_point a, t_point b);
t_point_3d		ft_create_point_3d(double x, double y, double z, t_rgb color);
t_point			ft_3d_to_2d(t_point_3d a, t_point p);
t_pos			ft_create_pos(double max, double min, double dt, double pos);
t_point			ft_perspective(t_point_3d a, t_point_3d c,
								t_point_3d thi, t_point_3d e);
int				get_next_line(int const fd, char **line);
t_bool			ft_getendian(void);
char			ft_wchrbin(wchar_t c);
char			ft_utf8chrsize(wchar_t c);
wchar_t			ft_utf8chrencode(wchar_t c);
int				ft_printf(const char *format, ...);
int				ft_printf_fd(int fd, const char *format, ...);
#endif
