# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: digoncal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 11:15:11 by digoncal          #+#    #+#              #
#    Updated: 2022/12/05 10:16:54 by digoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror -I.
DEPS = libft.h

SRC = $(shell find -type f -name '*.c'))
OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)
$(NAME): $(OBJ) $(DEPS)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
