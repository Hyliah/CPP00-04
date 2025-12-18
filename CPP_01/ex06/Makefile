NAME        = HarlFilter
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

OBJ_DIR     = obj
SRC_DIR     = .

SRC         = main.cpp Harl.cpp

OBJ         = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0;35m ./$(NAME) \033[0m ready to use. One argument needed : DEBUG, INFO, WARNING or ERROR"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re