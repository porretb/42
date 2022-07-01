# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 08:03:41 by bporret           #+#    #+#              #
#    Updated: 2022/06/26 15:14:06 by bporret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = coeur.c fonctions.c main.c

OBJS = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

TEXT = "42 best life"

$(NAME): $(OBJS)

$(NAME):
	gcc -o $(NAME) $(FLAG) $(OBJS)

clean:
	/bin/rm -f *.o
fclean:
	/bin/rm -f $(NAME)
