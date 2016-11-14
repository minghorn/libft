# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhorn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/31 12:04:02 by mhorn             #+#    #+#              #
#    Updated: 2016/11/07 12:42:23 by mhorn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I "libft.h"
FILES	= ft_isalpha.c ft_putchar.c ft_putstr.c ft_atoi.c ft_strstr.c ft_swap.c ft_strcmp.c ft_isdigit.c ft_strdup.c ft_strlen.c ft_isprint.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_putnbr.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strlen.c ft_strncat.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_isascii.c

OBJS = $(addprefix build/, $(FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

build/%.o: ./%.c | build
	$(CC) $(CFLAGS) -o $@ -c $^

build:
	mkdir build

clean:
	rm -rf build/

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean
