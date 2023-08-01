# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 17:40:56 by toantune          #+#    #+#              #
#    Updated: 2023/05/31 14:47:55 by toantune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

FILES = ft_printf.c \
	ft_putchar.c \
	ft_putnbr_base.c \
	ft_putnbr_baseus.c \
	ft_putnbr.c \
	ft_putnbrus.c \
	ft_putstr.c \
	ft_strlen.c

OBJS = $(FILES:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
