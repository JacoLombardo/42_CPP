# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 10:32:38 by jalombar          #+#    #+#              #
#    Updated: 2025/04/15 14:15:45 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow
98 = -std=c++98
CLASSES = Bureaucrat.cpp Form.cpp
SRCS = main.cpp $(CLASSES)
HEADER = Bureaucrat.hpp Form.hpp
NAME = bureaucracy

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(98) -o $@ $(SRCS)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all