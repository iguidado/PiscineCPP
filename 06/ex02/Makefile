NAME=identify

SRC=main.cpp\
	identify.cpp\
	Base.cpp


HDR= Base.hpp\
	 identify.hpp

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
