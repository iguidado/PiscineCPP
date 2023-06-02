#include "RPN.hpp"
#include <list>

bool	ft_isop(char c)
{
	std::string op = OPERATOR;
	std::string::const_iterator	bi = op.begin();
	std::string::const_iterator	ei = op.end();
	while (bi  < ei)
	{
		if (*bi == c)
			return (true);
		bi++;
	}
	return (false);
}

void	ft_strtrim(std::string &str)
{
	str.erase(str.find_last_not_of(" \t\n\v") + 1);
	str.erase(0, str.find_first_not_of(" \t\n\v"));
}

void	ft_check_input(std::string	token)
{
	std::string::iterator	it = token.begin();
	std::string::iterator	it_end = token.end();

	if (token.find_first_not_of(OPERATOR DEC) != std::string::npos)
			throw std::exception();
	if (token.size() > 1)
			throw std::exception();
	if (ft_isop(*it))
	{
		if (token.size() > 1)
			throw std::exception();
	}
	else
	{
		while (it != it_end)
		{
			if (!isdigit(*it))
				throw std::exception();
			it++;
		}
	}
}

void	ft_calc(std::stack<int, std::list<int> > &calc, char op)
{
	int	nbr1 = 0;
	int	nbr2;

	if (calc.size() <= 1)
		throw	std::exception();
	nbr2 = calc.top();
	calc.pop();
	nbr1 = calc.top();
	calc.pop();
	if (op == '-')
		calc.push(nbr1 - nbr2);
	else if (op == '+')
		calc.push(nbr1 + nbr2);
	else if (op == '/') {
		if (nbr2 == 0)
			throw std::exception();
		calc.push(nbr1 / nbr2);
	}
	else if (op == '*')
		calc.push(nbr1 * nbr2);
}

std::stack<int, std::list<int> >	ft_load_calc(char **av)
{
	std::stack<int, std::list<int> >	calc;
	std::string	tmp;
	std::string	token;
	size_t		pos = 0;

	tmp = *av;
	ft_strtrim(tmp);
	while (pos <= tmp.size())
	{
		token = ft_get_next_token(tmp, pos);
		ft_check_input(token);
		if (ft_isop(token[0]))
			ft_calc(calc, token[0]);
		else
			calc.push(std::atoi(token.c_str()));
	}
	return (calc);
}

std::string	ft_get_next_token(std::string calculus, size_t	&npos)
{
	size_t	next_pos = calculus.find_first_not_of(' ', npos);

	npos = calculus.find(' ', next_pos);
	return (calculus.substr(next_pos ,npos - next_pos));
}
