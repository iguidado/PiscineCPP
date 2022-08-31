NAME=Megaphone
SRC=megaphone.cpp
CC=c++
WFLAG=-Wall -Werror -Wextra
CFLAG=-std=c++98
FLAG=$(WFLAG) $(CFLAG)
OBJ=$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)

%.o : %.c
	$(CC) $(FLAG) $< -c $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
