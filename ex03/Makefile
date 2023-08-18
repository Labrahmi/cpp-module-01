# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 18:32:23 by ylabrahm          #+#    #+#              #
#    Updated: 2023/07/17 12:56:55 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp HumanA.cpp Weapon.cpp HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = violence

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
