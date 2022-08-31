NAME=Harl2.0

HDR=Harl.hpp

SRC=main.cpp\
    Harl.cpp


OBJ=$(SRC:.cpp=.o)


WFLAG=-Wall -Werror -Wextra
SFLAG=-std=c++98

FLAG=$(WFLAG) $(SFLAG)

CC=c++

all : $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
