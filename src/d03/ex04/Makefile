# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adelille <adelille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 19:21:49 by adelille          #+#    #+#              #
#    Updated: 2023/04/07 15:42:52 by adelille         ###   ########.fr        #
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

SRCS =		main.c what_tree_now.c
OBJS =		$(SRCS:.c=.o)

# *************************************************************************** #
#	RULES	#

all:		$(NAME)

test:		all
	@./$(NAME) && cat .end.txt

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
