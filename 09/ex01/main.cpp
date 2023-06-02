#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	try
	{
		(void)ac;
		std::stack<int, std::list<int> >	calc = ft_load_calc(av + 1);
		std::cout << calc.top() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}
	return (0);
}
