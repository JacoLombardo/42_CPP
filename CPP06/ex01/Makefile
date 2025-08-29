# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 09:50:57 by jalombar          #+#    #+#              #
#    Updated: 2025/04/17 10:06:42 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra
98 = -std=c++98
CLASSES = Serializer.cpp
SRCS = main.cpp $(CLASSES)
HEADER = Serializer.hpp
NAME = serialize

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(98) -o $@ $(SRCS)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all