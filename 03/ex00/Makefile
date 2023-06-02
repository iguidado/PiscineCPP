NAME=Claptrap
SRC=main.cpp\
    ClapTrap.cpp
HDR=ClapTrap.hpp
CC=c++ -Wall -Wextra -Werror -std=c++98

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(HDR) $(OBJ) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
