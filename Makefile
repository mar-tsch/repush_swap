# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 15:01:22 by mtritsch          #+#    #+#              #
#    Updated: 2022/11/16 20:03:04 by mtritsch         ###   ########.fr        #
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
LIBFT = Libft/
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar -rc

all : ${NAME}

${NAME}	: ${OBJS}
	@make -C ${LIBFT}
	@cp ${LIBFT}libft.a .
	${CC} ${OBJS} libft.a -o ${NAME}

.c.o :
	@echo "Compiling..."
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	@echo "Compilation successful !"

clean :
	${RM} ${OBJS}
	@make clean -C ${LIBFT}
	@echo "All cleaned !"

fclean :
	${RM} ${NAME}
	${RM} ${LIBFT}/libft.a
	@echo "All fcleaned ! <3"

re : fclean all
