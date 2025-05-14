NAME = FragTrap

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

OBJ_DIR = obj/

SRC_FILES = main ClapTrap ScavTrap FragTrap

OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
SRC = $(addsuffix .cpp, $(SRC_FILES))

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCompiling FragTrap...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./FragTrap created"

$(OBJ_DIR)%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all