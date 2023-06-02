NAME=MassZombify

SRC=main.cpp \
    Zombie.cpp \
    zombieHorde.cpp

OBJ=$(SRC:.cpp=.o)

HDR=Zombie.hpp


WFLAG=-Wall -Werror -Wextra
SFLAG=-std=c++98 -g3

FLAG=$(WFLAG) $(SFLAG)

CC=c++

all : $(NAME)

$(NAME): $(HDR) $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
