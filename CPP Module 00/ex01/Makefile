# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 16:09:44 by rafnasci          #+#    #+#              #
#    Updated: 2025/02/05 21:37:10 by rafnasci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

OBJ_DIR = obj/

SRC_FILES = 

OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
SRC = $(addsuffix .cpp, $(SRC_FILES))

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCompiling phonebook...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./phonebook created\n"

$(OBJ_DIR)%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all