# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adelille <adelille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 19:21:49 by adelille          #+#    #+#              #
#    Updated: 2023/03/22 19:22:35 by adelille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	a.out
CC = 	clang
RM = 	rm -rf

CFLAGS =	-Wall -Werror -Wextra
# CFLAGS +=	-g3
# CFLAGS +=	-fsanitize=address

# **************************************************************************** #
#	SRCS	#

SRCS =		main.c ../ex01/special_sum.c can_feed.c
OBJS =		$(SRCS:.c=.o)

# *************************************************************************** #
#	RULES	#

all:		$(NAME)

test:		all
	@./$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	@$(RM) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
