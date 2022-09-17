# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 17:08:25 by gsaiago           #+#    #+#              #
#    Updated: 2022/09/16 21:36:20 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	teste
SRCS	=	teste.c\
			utils_smartptr.c\

CC	=	clang -g -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) -o $(NAME)

clean: $(NAME)
	rm -f $(NAME)

val: all 
	valgrind ./$(NAME)

.PHONY: all re clean val
