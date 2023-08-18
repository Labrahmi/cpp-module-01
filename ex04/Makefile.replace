# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 18:32:23 by ylabrahm          #+#    #+#              #
#    Updated: 2023/07/15 20:16:17 by ylabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = losers

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
