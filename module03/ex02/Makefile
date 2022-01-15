# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alebross <alebross@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 13:53:08 by alebross          #+#    #+#              #
#    Updated: 2022/01/07 15:39:57 by alebross         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap
CC = c++
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
RM = rm -f
SRCS =	ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
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
