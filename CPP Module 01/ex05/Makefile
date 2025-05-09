NAME = Harl

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

OBJ_DIR = obj/

SRC_FILES = main Harl

OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
SRC = $(addsuffix .cpp, $(SRC_FILES))

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCompiling Harl...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./Harl created"

$(OBJ_DIR)%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all