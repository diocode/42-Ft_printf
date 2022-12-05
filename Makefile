# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: digoncal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 10:12:51 by digoncal          #+#    #+#              #
#    Updated: 2022/12/05 10:18:24 by digoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror -I.
DEPS = ft_printf.h

SRC = $(shell find -type f -name '*.c'))
OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)
$(NAME): $(OBJ) $(DEPS)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
