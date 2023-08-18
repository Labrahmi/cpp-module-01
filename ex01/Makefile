# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 18:32:23 by ylabrahm          #+#    #+#              #
#    Updated: 2023/07/15 17:13:29 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = Zombie.cpp main.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = moar_brainz

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
