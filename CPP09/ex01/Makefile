# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 10:17:44 by jalombar          #+#    #+#              #
#    Updated: 2025/10/02 14:11:54 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra
98 = -std=c++98
SRCS = main.cpp RPN.cpp
HEADER = RPN.hpp
NAME = rpn

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(98) -o $@ $(SRCS)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all