# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalcoci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/07 13:33:51 by amalcoci          #+#    #+#              #
#    Updated: 2016/10/31 16:59:10 by amalcoci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
FILE+= ft_putstr_fd.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_putstr.c
FILE+= get_next_line.c
ISTO = ft_is.c ft_is_space.c ft_isalnum.c  ft_isalpha.c  ft_isascii.c
ISTO+= ft_isdigit.c  ft_isprint.c ft_tolower.c  ft_toupper.c
LST =  ft_freestab.c ft_lstadd.c ft_lstdel.c  ft_lstdelone.c ft_lstiter.c
LST+=  ft_lstmap.c    ft_lstnew.c ft_lstddelone.c ft_lstswap.c ft_lstsort.c
MEM =  ft_bzero.c    ft_memalloc.c ft_memccpy.c  ft_memchr.c   ft_memcmp.c
MEM+=  ft_memcpy.c   ft_memdel.c   ft_memmove.c  ft_memset.c   ft_memrealoc.c
MEM+=  ft_memswap.c  ft_getendian.c
STR =  ft_atoi.c     ft_strcat.c   ft_strclr.c   ft_strcpy.c   ft_strdup.c
STR+=  ft_striter.c  ft_strjoin.c  ft_strlen.c   ft_strmapi.c  ft_strncmp.c
STR+=  ft_strnequ.c  ft_strnstr.c  ft_strsplit.c ft_strsub.c
STR+=  ft_itoa.c     ft_strchr.c   ft_strcmp.c   ft_strdel.c   ft_strequ.c
STR+=  ft_striteri.c ft_strlcat.c  ft_strmap.c   ft_strncat.c  ft_strncpy.c
STR+=  ft_strnew.c   ft_strrchr.c  ft_strstr.c   ft_strtrim.c  ft_strealloc.c
STR+=  ft_strjoin2.c ft_strnlen.c
WSTR=  ft_utf8chrencode.c  ft_utf8chrsize.c   ft_wchrbin.c
GRAPH= ft_create_point.c ft_line.c ft_create_point_3d.c ft_3d_to_2d.c
GRAPH+= ft_create_pos.c ft_create_rgb.c ft_rgb_to_int.c ft_create_line.c
GRAPH+= ft_perspective.c
PRINTF= env.c  env_dot.c  flags.c  flags2.c  ft_printf.c  print_all.c
PRINTF+= print_char.c  print_number.c  print_str.c  print_wchar.c  print_wstr.c
PRINTF+= tools.c


SRC = $(FILE:%.c=file/%.c)
SRC+= $(ISTO:%.c=is_to/%.c)
SRC+= $(LST:%.c=lst/%.c)
SRC+= $(MEM:%.c=mem/%.c)
SRC+= $(STR:%.c=str/%.c)
SRC+= $(WSTR:%.c=wstr/%.c)
SRC+= $(MATH:%.c=math/%.c)
SRC+= $(GRAPH:%.c=graph/%.c)
SRC+= $(PRINTF:%.c=printf/%.c)
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
INCLUDE = includes
CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ) :
	@$(CC) -c $(FLAGS) -o $@ $*.c -I $(INCLUDE)

clean :
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean
