# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 18:44:15 by kfujita           #+#    #+#              #
#    Updated: 2023/08/08 02:02:47 by kfujita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	main

SRCS	:= \
	$(NAME).cpp\
	AMateria.cpp\
	Character.cpp\
	Cure.cpp\
	Ice.cpp\
	MateriaSource.cpp\

OBJS	:= $(SRCS:.cpp=.o)
DEPS	:= $(OBJS:.o=.d)

override CXXFLAGS	+=	-Wall -Wextra -Werror -MMD -MP -std=c++98

CXX		:=	c++

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

debug: clean_local_obj
	make CXXFLAGS='-DDEBUG -g'
faddr: clean_local_obj
	make CXXFLAGS='-g -fsanitize=address'
fleak: clean_local_obj
	make CXXFLAGS='-g -fsanitize=leak'

clean_local_obj:
	rm -f $(OBJS)

clean: clean_local_obj
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

-include $(DEPS)

.PHONY:	clean_local_obj
