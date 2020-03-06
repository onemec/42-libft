# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: onemec <onemec@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 13:01:14 by onemec            #+#    #+#              #
#    Updated: 2020/02/23 14:17:15 by onemec           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRCS :=	ft_strrchr.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlcat.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strsplit.c \
		ft_strncpy.c \
		ft_lstmap.c \
		ft_lstadd.c \
		ft_striter.c \
		ft_strstr.c \
		ft_isdigit.c \
		ft_putnbr.c \
		ft_memccpy.c \
		ft_strdel.c \
		ft_memchr.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_putstr_fd.c \
		ft_lstiter.c \
		ft_lstdelone.c \
		ft_toupper.c \
		ft_strcpy.c \
		ft_lstnew.c \
		ft_strdup.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_putendl_fd.c \
		ft_memdel.c \
		ft_strnstr.c \
		ft_putchar.c \
		ft_isascii.c \
		ft_strlen.c \
		ft_strsub.c \
		ft_strnew.c \
		ft_memalloc.c \
		ft_putendl.c \
		ft_strncat.c \
		ft_itoa.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_strtrim.c \
		ft_strequ.c \
		ft_putchar_fd.c \
		ft_memset.c \
		ft_isalpha.c \
		ft_strcat.c \
		ft_tolower.c \
		ft_strnequ.c \
		ft_strjoin.c \
		ft_atoi.c \
		ft_strclr.c \
		ft_strmapi.c \
		ft_isprint.c \
		ft_lstdel.c \
		ft_strchr.c \
		ft_iswhitespace.c
CFLAGS := -Wextra -Werror -Wall
OBJECTS := $(patsubst %.c,%.o,$(SRCS))

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rc $@ $^
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
