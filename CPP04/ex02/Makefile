# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 13:48:12 by jalombar          #+#    #+#              #
#    Updated: 2025/02/03 10:58:19 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow
98 = -std=c++98
CLASSES = Animal.cpp Dog.cpp Cat.cpp Brain.cpp
SRCS = main.cpp $(CLASSES)
TESTER = tester.cpp $(CLASSES)
HEADER = AAnimal.hpp Dog.hpp Cat.hpp Brain.cpp
NAME = brain

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
