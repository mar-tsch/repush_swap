# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 13:42:02 by mtritsch          #+#    #+#              #
#    Updated: 2022/08/30 15:21:31 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= src/ main.c push_swap.c pushes.c rotates.c swaps.c utils.c reverse_rotates.c \
OBJS	= $(SRCS:.c=.o)
NAME	= push_swap 
LIBFT	= libft/
CC 	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
AR	= ar -rc

${NAME} : ${OBJS}
	@make -C ${LIBFT}
	@cp ${LIBFT}/libft.a .
	@mv libft.a ${NAME}
	${AR} ${NAME} ${OBJS}

.c.o :
	@echo "Compiling..."
	${CC} ${CFLAGS} -c $< -o ${@%.c.o}
	@echo "Compilation successful"

all :	$(NAME)

clean :
	${RM} ${OBJS}
	@make clean -C ${LIBFT}
	@echo "Clean successful"

fclean : clean
	${RM} ${NAME}
	${RM} ${LIBFT}/libft.a
	@echo "Fclean successful"

re : fclean all
