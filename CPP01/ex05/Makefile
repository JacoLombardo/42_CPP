# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 13:48:12 by jalombar          #+#    #+#              #
#    Updated: 2025/01/28 13:44:11 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra
98 = -std=c++98
SRCS = main.cpp
TESTER_SRCS = tester.cpp
HEADER = Harl.hpp
NAME = harl

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(98) -o $@ $(SRCS)

tester: $(TESTER_SRCS)
	@$(CC) $(FLAGS) -o $@ $(TESTER_SRCS)
	
clean:

fclean: clean
	rm -f $(NAME)
	rm -f tester

re: fclean all
