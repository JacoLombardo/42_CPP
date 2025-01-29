# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 13:48:12 by jalombar          #+#    #+#              #
#    Updated: 2025/01/29 14:58:09 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra
98 = -std=c++98
SRCS = main.cpp
TESTER = tester.cpp
HEADER = Fixed.hpp Point.hpp
NAME = point

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(98) -o $@ $(SRCS)

tester:	$(TESTER)
	@$(CC) $(FLAGS) $(98) -o $@ $(TESTER)
	
clean:

fclean: clean
	rm -f $(NAME)
	rm -f tester

re: fclean all
