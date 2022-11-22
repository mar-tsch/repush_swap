# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 15:01:22 by mtritsch          #+#    #+#              #
#    Updated: 2022/11/22 15:23:59 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	src/push_swap.c\
		src/algo_chonk.c\
		src/algo_smol.c\
		src/define_caracs.c\
		src/displayers.c\
		src/errors.c\
		src/multiple_moves.c\
		src/roll_stacks.c\
		src/simple_moves.c\
		src/utils.c
OBJS = ${SRCS:.c=.o}
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar -rc

all : ${NAME}

${NAME}	: Libft/libft.a ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -L Libft -lft -o ${NAME}

Libft/libft.a :
	make -C Libft

clean :
	${RM} ${OBJS}
	@make clean -C Libft
	@echo "All cleaned !"

fclean :
	${RM} ${OBJS} ${NAME}
	@make fclean -C Libft
	@echo "All fcleaned ! <3"

re : fclean all
