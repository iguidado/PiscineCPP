#include <algorithm>
#include <stack>
#include <iostream>
#include <string>
#include <exception>
#include <list>

#define OPERATOR "-+/*"
#define DEC "0123456789"

bool	ft_isop(char c);
std::string	ft_get_next_token(std::string calculus, size_t	&npos);
std::stack<int, std::list<int> >	ft_load_calc(char **av);
void	ft_check_input(std::string	token);
