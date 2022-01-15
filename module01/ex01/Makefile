# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alebross <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 13:53:08 by alebross          #+#    #+#              #
#    Updated: 2021/12/21 18:08:04 by alebross         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieland
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS =	Zombie.cpp \
		ZombieHorde.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY	: all clean fclean re
