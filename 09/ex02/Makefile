NAME=PmergeMe

HDR=PmergeMe.hpp
SRC=main.cpp\
    PmergeMe.cpp

CXX=c++
CXX_FLAGS=-Wall -Werror -Wextra -std=c++98
#CXX_FLAGS	+= -fsanitize=address -fsanitize=undefined -fsanitize=leak -Weffc++

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CXX) -o $(NAME) $(OBJ) $(CXX_FLAGS)

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXX_FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
