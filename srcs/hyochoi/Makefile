# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/25 10:12:37 by hyochoi           #+#    #+#              #
#    Updated: 2021/01/26 10:39:44 by hyochoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Module03
CC = clang++
CFLAGS = -Wall -Wextra -Werror -O2
DIRS = ex00 ex01 ex02 ex03 ex04

all: $(NAME)

$(NAME):
	@for d in $(DIRS) ; \
	do \
		echo "$(CC) $(CFLAGS) -I$$d /$$d/*.cpp -o ./$$d/a.out"; \
		$(CC) $(CFLAGS) -I./$$d ./$$d/*.cpp -o ./$$d/a.out ; \
	done

clean:

fclean: clean
	rm */a.out

re: fclean all

.PHONY: all clean fclean re
