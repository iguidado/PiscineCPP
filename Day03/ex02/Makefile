NAME=Claptrap
SRC=main.cpp\
    ClapTrap.cpp\
    FragTrap.cpp
	
HDR=ClapTrap.hpp\
    FragTrap.hpp
CC=c++ -Wall -Wextra -Werror -std=c++98

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(HDR) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
