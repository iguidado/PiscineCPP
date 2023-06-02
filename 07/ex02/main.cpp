#include "Array.hpp"
#include <iostream>

int	main(void)
{

	std::cout << "----Constructor----" << std::endl;
	Array<int> empty;
	Array<int> test(10);
	test[0] = 10;
	Array<int>	cp(test);
	Array<int>	assign = test;


	std::cout << "test[0] = " << test[0] << std::endl;
	std::cout << "cp[0] = " << cp[0] << std::endl;
	std::cout << "assign[0] = " << assign[0] << std::endl;
	std::cout << "test.size = " << test.size() << std::endl;
	std::cout << "----Exception----" << std::endl;
	try
	{
		std::cout << test[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << test[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----Destructor----" << std::endl;
	return (0);
}
