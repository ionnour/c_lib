cmake_minimum_required(VERSION 3.6)
project(libft)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror -Wall -Wextra")

set(LIB_FILES
        includes/libft.h includes/get_next_line.h
        lst/ft_lstdelone.c   str/ft_strdup.c
        file/ft_putchar.c    lst/ft_lstiter.c     str/ft_strequ.c
        file/ft_putchar_fd.c lst/ft_lstmap.c      str/ft_striter.c
        file/ft_putendl.c    lst/ft_lstnew.c      str/ft_striteri.c
        file/ft_putendl_fd.c mem/ft_bzero.c       str/ft_strjoin.c
        file/ft_putnbr.c     mem/ft_memalloc.c    str/ft_strlcat.c
        file/ft_putnbr_fd.c  mem/ft_memccpy.c     str/ft_strlen.c
        file/ft_putstr.c     mem/ft_memchr.c      str/ft_strmap.c
        file/ft_putstr_fd.c  mem/ft_memcmp.c      str/ft_strmapi.c
        is_to/ft_is.c        mem/ft_memcpy.c      str/ft_strncat.c
        is_to/ft_is_space.c  mem/ft_memdel.c      str/ft_strncmp.c
        is_to/ft_isalnum.c   mem/ft_memmove.c     str/ft_strncpy.c
        is_to/ft_isalpha.c   mem/ft_memset.c      str/ft_strnequ.c
        is_to/ft_isascii.c   str/ft_atoi.c        str/ft_strnew.c
        is_to/ft_isdigit.c   str/ft_itoa.c        str/ft_strnstr.c
        is_to/ft_isprint.c   str/ft_strcat.c      str/ft_strrchr.c
        is_to/ft_tolower.c   str/ft_strchr.c      str/ft_strsplit.c
        is_to/ft_toupper.c   str/ft_strclr.c      str/ft_strstr.c
        lst/ft_freestab.c    str/ft_strcmp.c      str/ft_strsub.c
        lst/ft_lstadd.c      str/ft_strcpy.c      str/ft_strtrim.c
        lst/ft_lstdel.c      str/ft_strdel.c      mem/ft_memrealoc.c
        printf/env.c            printf/flags.c          printf/ft_printf.c
        printf/print_char.c     printf/print_str.c      printf/print_wstr.c
        printf/env_dot.c        printf/flags2.c         printf/print_all.c
        printf/print_number.c   printf/print_wchar.c    printf/tools.c
        str/ft_strealloc.c   str/ft_strjoin2.c lst/ft_lstddelone.c
        graph/ft_create_point.c graph/ft_line.c graph/ft_create_point_3d.c
        graph/ft_3d_to_2d.c graph/ft_create_rgb.c graph/ft_create_pos.c
        graph/ft_perspective.c
        graph/ft_rgb_to_int.c mem/ft_memswap.c file/get_next_line.c graph/ft_create_line.c
        mem/ft_getendian.c wstr/ft_utf8chrsize.c wstr/ft_wchrbin.c wstr/ft_utf8chrencode.c includes/wstr.h
        includes/ft_printf.h str/ft_strnlen.c lst/ft_lstswap.c lst/ft_lstsort.c)


add_library(libft ${LIB_FILES})
include_directories(includes)

add_executable(tft main.c)
target_link_libraries(tft libft)
