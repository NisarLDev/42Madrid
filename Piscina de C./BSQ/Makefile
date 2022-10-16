# File from automatic build with structure in Makefile
# Copyrights: Andriy Savchynets (asavchyn), Nisar Laftissi (nlaftiss)
# Name of program into compilation
	NAME       = bsq
# Flags with compilation
	FLAGS      = -Wall -Wextra -Werror 
# Dirctories of compilation
	SRC_DIR    = ./sources/
	OBJ_DIR    = ./objects/
	INC_DIR    = ./includes/
# Directories and sources
	SRC_FILES  = $(wildcard $(SRC_DIR)/*.c)
	OBJ_FILES  = $(SRC_FILES:.c=.o)
# Directions
SRC        = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ        = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
q
# Object file compilling (ejecutable file).
all: obj $(NAME)

# Make directory from sources.
obj:
	@mkdir -p $(OBJ_DIR)
$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@gcc $(FLAGS) -I $(INC_DIR) -o $@ -c $<
# Compilling objects with files and libraries
$(NAME): $(OBJ)
	@echo "Compilling, wait a few seconds..."
	@gcc $(OBJ) -o $(NAME)
	@echo "$(NAME) Program generated! Congratulation"
# Eraser all type objects files with C program
clean:
	@rm -Rf $(OBJ_FILES)
	@echo "The all files of type objects with extension file .o in C program results from process of compilation $(NAME) as erased"
# Erased all objetcs, files, binary and of all referenced directory from compilation.
fclean:	clean
	@rm -f $(NAME)
	@echo "The all files from $(NAME) compilation as erased"
# Re-make program()
re: fclean all
# The function . Phony declared all the names, fclean clean and re is equal to the functions of the compilation process
.PHONY: all clean fclean re
