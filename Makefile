# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aatki <aatki@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 21:13:19 by aatki             #+#    #+#              #
#    Updated: 2022/10/24 12:21:51 by aatki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =ft_atoi.c\
	ft_calloc.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_memchr.c\
	ft_memcpy.c\
	ft_memset.c\
	ft_strdup.c\
	ft_strlcpy.c\
	ft_strncmp.c\
	ft_strrchr.c\
	ft_toupper.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isascci.c\
	ft_isprint.c\
	ft_memcmp.c\
	ft_memmove.c\
	ft_strchr.c\
	ft_strlcat.c\
	ft_strlen.c\
	ft_strnstr.c\
	ft_tolower.c\
	ft_substr.c\
	ft_strtrim.c\
	ft_split.c\
	ft_strjoin.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstadd_back.c\
	ft_lstmap.c

CFLAGS = -Wall -Wextra -Werror

CC = cc

OBJS = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
	ar -rcs ${NAME} ${OBJS}
	
${OBJS} : ${SRC}
	${CC} ${CFLAGS}  -c ${SRC}
clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re