# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 13:48:12 by jalombar          #+#    #+#              #
#    Updated: 2025/01/30 10:30:18 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra
98 = -std=c++98
SRCS = main.cpp ClapTrap.cpp
TESTER = tester.cpp ClapTrap.cpp
HEADER = ClapTrap.hpp
NAME = clap

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
