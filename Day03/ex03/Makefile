NAME=Claptrap
SRC=main.cpp\
    ClapTrap.cpp\
    ScavTrap.cpp\
    FragTrap.cpp\
    DiamondTrap.cpp
	
HDR=ClapTrap.hpp\
    ScavTrap.hpp\
    FragTrap.hpp\
    DiamondTrap.hpp
CC=c++ -Wall -Wextra -Werror -std=c++98

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(HDR) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@


clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
