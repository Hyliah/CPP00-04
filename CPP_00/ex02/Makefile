NAME        = ex00
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

OBJ_DIR     = obj
SRC_DIR     = .

SRC         = Account.cpp Account.hpp tests.cpp

OBJ         = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "Compilation terminée : $(NAME)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compilation de $< terminée."

clean:
	@$(RM) $(OBJ_DIR)
	@echo "Dossier obj supprimé."

fclean: clean
	@$(RM) $(NAME)
	@echo "Exécutable supprimé."

re: fclean all

.PHONY: all clean fclean re