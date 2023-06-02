#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int> hello;
	std::vector<int>::iterator	it;

	std::cout << "Pushing back 11\n" << std::endl;
	hello.push_back(11);
	std::cout << "Pushing back 21\n" << std::endl;
	hello.push_back(21);
	std::cout << "Pushing back -2\n" << std::endl;
	hello.push_back(-2);

	std::cout << "Searching -2" << std::endl;
	try
	{
		it = easyfind(hello, -2);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nSearching 42" << std::endl;
	try
	{
		it = easyfind(hello, 42);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nSearching 2" << std::endl;
	try
	{
		it = easyfind(hello, 2);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nSearching -11" << std::endl;
	try
	{
		it = easyfind(hello, -11);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nSearching 11" << std::endl;
	try
	{
		it = easyfind(hello, 11);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}std::cout << "\nSearching 21" << std::endl;
	try
	{
		it = easyfind(hello, 21);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
