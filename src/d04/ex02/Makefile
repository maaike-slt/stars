# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adelille <adelille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 19:21:49 by adelille          #+#    #+#              #
#    Updated: 2023/04/25 18:17:16 by msloot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	a.out
CC = 	clang
RM = 	rm -rf

CFLAGS =	-Wall -Werror -Wextra
# CFLAGS +=	-g3
# CFLAGS +=	-fsanitize=address

# **************************************************************************** #
#	MAKEFILE	#

#MAKEFLAGS += --silent

SHELL := bash

B =		$(shell tput bold)
BLA =	$(shell tput setaf 0)
RED =	$(shell tput setaf 1)
GRE =	$(shell tput setaf 2)
YEL =	$(shell tput setaf 3)
BLU =	$(shell tput setaf 4)
MAG =	$(shell tput setaf 5)
CYA =	$(shell tput setaf 6)
WHI =	$(shell tput setaf 7)
D =		$(shell tput sgr0)
BEL =	$(shell tput bel)
CLR =	$(shell tput el 1)

# **************************************************************************** #
#	SRCS	#

SRCS =		main.c ft_putstr.c
OBJS =		$(SRCS:.c=.o)

# **************************************************************************** #

define	ft_test
	@./$(NAME) '$(1)' > you
	@printf '$(1)' > expected
	@if [[ ! -z $$(diff you expected) ]]; then \
		printf "\t$(D)$(B)$(GRE)expected:$(D)\n$(GRE)"; \
		cat expected; \
		printf "$(D)\n\t$(B)$(RED)you:$(D)\n$(RED)"; \
		cat you; \
		printf "$(D)\n" ; \
		exit 1; \
	fi;
	@$(RM) you expected
endef

# *************************************************************************** #
#	RULES	#

all:		$(NAME)

test:		all
	$(call ft_test,"hello")
	$(call ft_test,"")
	$(call ft_test,"1")
	$(call ft_test,"somewhatloooooooooooooooooooooooooooooooooooong")

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	@$(RM) $(OBJS)

fclean:		clean
	@$(RM) $(NAME) you expected

re:			fclean all

.PHONY: all clean fclean re test test

# **************************************************************************** #
