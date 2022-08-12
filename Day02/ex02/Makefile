NAME=Test_fixed

SRC= main.cpp\
     Fixed.cpp

HDR=Fixed.hpp

CC=c++

WFLAG=-Wall -Werror -Wextra
SFLAG=-std=c++98

FLAG= $(WFLAG) $(SFLAG)

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(HDR) $(OBJ) $(SRC)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAG) $< -c -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
