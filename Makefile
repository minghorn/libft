# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhorn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/31 12:04:02 by mhorn             #+#    #+#              #
#    Updated: 2016/10/31 12:45:48 by mhorn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I "libft.h"
FILES	= ft_islower.c ft_isupper.c ft_isalpha.c ft_putchar.c ft_putstr.c ft_putnum.c test.c

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
