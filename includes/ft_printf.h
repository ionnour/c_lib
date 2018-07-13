/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:33:00 by amalcoci          #+#    #+#             */
/*   Updated: 2017/03/01 15:33:00 by amalcoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <wchar.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>
# include "libft.h"
# define ALT			0x001
# define LADJUST		0x004
# define LONGDBL		0x008
# define LONGINT		0x010
# define LLONGINT	0x020
# define SHORTINT	0x040
# define ZEROPAD		0x080
# define SIZET		0x400
# define PTRDIFFT	0x800
# define INTMAXT		0x1000
# define CHARINT		0x2000
# define BUF	32

typedef struct	s_printf
{
	const char	**fmt;
	int			flags;
	t_bool		up;
	int			dprec;
	int			width;
	int			prec;
	int			size;
	int			ndig;
	int			expt;
	char		expchar;
	char		ox[2];
	char		sign;
	t_bool		unsign;
	char		*decimal_point;
	int			decpt_len;
	char		*dtoaend;
	int			base;
	int			np;
	t_bool		free;
	unsigned	of;
	long long	ll;
}				t_printf;
int				ft_printf(const char *format, ...);
int				ft_printf_fd(int fd, const char *format, ...);
int				pad(int fd, int size, char c);
t_printf		get_env(const char **fmt, char *c, va_list *argp);
int				print_char(int fd, t_printf env, char c);
int				print_wchar(int fd, t_printf env, wint_t c);
int				print_str(int fd, t_printf env, char *str);
int				print_wstr(int fd, t_printf env, wchar_t *str);
int				print_number(int fd, t_printf env);
int				print_all(int fd, t_printf env, char *cp);
t_bool			get_dot(char *c,const char **fmt, t_printf *env, va_list *argp);
int				flags(int fd, t_printf env, va_list *argp, char c);
void			get_int(t_printf *env, va_list *argp);
int				pas5(char c, t_printf env, va_list *argp);
#endif
