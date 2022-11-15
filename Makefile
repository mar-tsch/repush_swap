# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 15:01:22 by mtritsch          #+#    #+#              #
#    Updated: 2022/11/15 19:59:40 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	src/push_swap.c\
			algo_chonk.c\ 
			algo_smol.c\
			define_caracs.c\
			displayers.c\
			errors.c\
			multiple_moves.c\
			roll_stacks.c\
			simple_moves.c\
			utils.c\

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = libft/

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

AR = ar -rc

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
