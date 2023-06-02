NAME=mutant
SRC=main.cpp
	
HDR=MutantStack.hpp

CC=c++ -Wall -Werror -Wextra -std=c++98

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
