# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 15:01:22 by mtritsch          #+#    #+#              #
#    Updated: 2022/10/12 15:13:32 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= src/
OBJS	= ${SRCS:.c=.o}
NAME	= push_swap
LIBFT	= libft/
CC	= gcc
CFLAGS	= -Wall -Werror -Wextra
RM	= rm -f
AR	= ar -rc

${NAME}	:
	${OBJS}
	@make -C ${LIBFT}
	@cp ${LIBFT}/libft.a
	@mv libft.a ${NAME}
	${AR} ${NAME} ${OBJS}

.c.o	:
	@echo "Compiling..."
	${CC} ${CFLAGS} -c $< -o ${a%.c.o}
	@echo "Compilation successful !"

all	:
	${NAME}

clean	:
	${RM} ${OBJS}
	@make clean -C ${LIBFT}
	@echo "All cleaned !"

fclean	:
	${RM} ${NAME}
	${RM} ${LIBFT}/libft.a
	@echo "All fcleaned ! <3"

re	:
	fclean all
