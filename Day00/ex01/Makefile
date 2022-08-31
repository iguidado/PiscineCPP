NAME=PBook

SRC=PhoneBook.cpp\
    main.cpp

HDR=PhoneBook.hpp

CC=c++

WFLAG=-Wall -Werror -Wextra
SFLAG=-std=c++98

FLAG= $(WFLAG) $(SFLAG)

OBJ=$(SRC:.c=.o)

all : $(NAME)

$(NAME): $(HDR) $(OBJ) $(SRC)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $< -c $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean re

.PHONY:all clean fclean re
