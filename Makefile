# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhorn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/31 12:04:02 by mhorn             #+#    #+#              #
#    Updated: 2017/01/06 15:41:30 by mhorn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I "libft.h"
FILES	= ft_isalpha.c ft_putchar.c ft_putstr.c ft_atoi.c ft_strstr.c ft_swap.c ft_strcmp.c ft_isdigit.c ft_strdup.c ft_strlen.c ft_isprint.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_putnbr.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strlen.c ft_strncat.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_memalloc.c ft_isalnum.c ft_isascii.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoc.c ft_ctdigits.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

OBJS = $(addprefix build/, $(FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

build/%.o: ./%.c | build
	$(CC) $(CFLAGS) -o $@ -c $^

build:
	mkdir build

clean:
	rm -rf build/

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean
