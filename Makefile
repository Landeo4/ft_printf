# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 10:00:45 by tpotilli@st       #+#    #+#              #
#    Updated: 2023/01/17 14:25:13 by tpotilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SRCS	=	ft_putchar.c\
			ft_putnbr_base.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_printf.c\
			ft_strlen.c\
			ft_putnbr_void.c\
			ft_itoa.c\

OBJS	=	$(SRCS:.c=.o)
CC		=	cc
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) :	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all : ${NAME}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY	:	all clean fclean re bonus