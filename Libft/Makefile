# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 18:15:48 by mtritsch          #+#    #+#              #
#    Updated: 2022/11/22 15:37:10 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
		ft_tolower.c ft_toupper.c ft_atoi.c ft_itoa.c \
		ft_strlen.c ft_strdup.c ft_substr.c ft_strlcpy.c ft_split.c ft_strchr.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c \
		ft_printf.c hexa.c u_int.c ptr.c utils.c \
		get_next_line.c get_next_line_utils.c
NAME	= libft.a
OBJS	= ${SRCS:.c=.o}
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -rf
AR	= ar rcs


${NAME} : ${OBJS}
	@echo "\033[33;01mCompiling...\033[00m"
	${CC} ${CFLAGS} -c ${SRCS}
	${AR} ${NAME} ${OBJS}
	@echo "\033[32;01mCompilation successful\033[00m"

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean :
	${RM} ${OBJS} ${NAME}

re : fclean all
