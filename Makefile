# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 17:08:25 by gsaiago           #+#    #+#              #
#    Updated: 2022/09/11 18:08:24 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	teste
SRCS	=	teste.c\
			utils_smartptr.c\

CC	=	clang

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

clean: $(NAME)
	rm -f $(NAME)

t: all
	./$(NAME)
