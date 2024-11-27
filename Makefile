# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokuyoshi <tokuyoshi@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 12:13:12 by tokuyoshi         #+#    #+#              #
#    Updated: 2024/11/27 20:25:38 by tokuyoshi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
LIB			=	ar rcs
RM			=	rm -f

SRCS		=	ft_printf.c ft_printf_utils.c

OBJS		=	$(SRCS:.c=.o)

$(NAME):	$(OBJS)
	$(LIB) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re