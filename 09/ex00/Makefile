NAME=btc
CXX=clang++
HDR=BitcoinExchange.hpp
SRC=main.cpp\
	BitcoinExchange.cpp

CXX_FLAGS= -Wall -Werror -Wextra -std=c++98
#CXX_FLAGS	+= -fsanitize=address -fsanitize=undefined -fsanitize=leak -Weffc++

OBJS=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS) $(HDR) $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(CXX_FLAGS)

debug:  $(SRCS) $(HDR) $(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(CXX_FLAGS)

%.o: %.cpp $(HDR)
	$(CXX) -c $< -o $@ $(CXX_FLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
