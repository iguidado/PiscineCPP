NAME=megaphone
SRC=megaphone.cpp
CC=c++
WFLAG=-Wall -Werror -Wextra
CFLAG=-std=c++98
FLAG=$(WFLAG) $(CFLAG)
OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ)  -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAG) $< -c -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
