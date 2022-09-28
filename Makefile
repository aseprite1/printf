# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 13:53:45 by geonlee           #+#    #+#              #
#    Updated: 2022/09/22 19:18:09 by geonlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c \
		ft_putchar.c \
		ft_putnbr_hex.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putnbr_hex_upper.c \
		ft_putnbr_unsigned.c \
		ft_strlen.c \
		ft_type.c \

FLAGS	= -Wall -Werror -Wextra

OBJS	= $(SRCS:%.c=%.o)

all: $(NAME)

%.o : %.c
	cc $(FLAGS) -c $^

$(NAME): $(OBJS) 
	ar rc $@ $^

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: 
	make clean
	make all

.PHONY: all clean re