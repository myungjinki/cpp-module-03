# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 14:21:47 by mki               #+#    #+#              #
#    Updated: 2021/07/26 14:47:19 by mki              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -Wshadow -Wno-shadow
RM			=	rm -rf
FILES		=	main\
				ClapTrap\
				ScavTrap\
				FragTrap\
				DiamondTrap

SRCS_DIR	=	./
SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES))) 
OBJS		=	$(addprefix $(SRCS_DIR), $(addsuffix .o, $(FILES))) 

.cpp.o:
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
