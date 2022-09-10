#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int> hello;
	std::vector<int>::iterator	it;

		hello.push_back(11);
		hello.push_back(21);
		hello.push_back(-2);

	try
	{
	it = easyfind(hello, 42);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
