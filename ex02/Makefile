NAME = brain

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling [$(NAME)]..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Finished [$(NAME)]"

%.o: %.cpp
	@echo "Compiling [$@]..."
	@$(CC) $(CFLAGS) -o $@ -c $<
	@echo "Finished [$@]"

clean:
	@rm -f $(OBJ)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "Executable removed."

re: fclean all

.PHONY: all clean fclean re
