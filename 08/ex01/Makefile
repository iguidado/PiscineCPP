NAME=span
SRC=main.cpp\
	Span.cpp
HDR=Span.hpp

CC=c++ -Wall -Werror -Wextra -std=c++98

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
