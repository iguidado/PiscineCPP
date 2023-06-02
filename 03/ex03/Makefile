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
