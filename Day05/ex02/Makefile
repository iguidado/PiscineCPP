NAME=Forms
SRC=main.cpp\
    Form.cpp\
    ShrubberyCreationForm.cpp\
    RobotomyRequestForm.cpp\
    PresidentialPardonForm.cpp\
    Bureaucrat.cpp
	
HDR=Bureaucrat.hpp\
    ShrubberyCreationForm.hpp\
    RobotomyRequestForm.hpp\
    PresidentialPardonForm.hpp\
    Form.hpp

CC=c++ -Wall -Wextra -Werror -std=c++98

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(HDR) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) *_shrubbery

re: fclean all

.PHONY:all clean fclean re
