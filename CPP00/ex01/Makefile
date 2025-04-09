# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 13:48:12 by jalombar          #+#    #+#              #
#    Updated: 2025/02/03 12:47:51 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++   
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp
HEADER = Contact.hpp PhoneBook.hpp
NAME = phone

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) -o $@ $(SRCS)
	
clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
