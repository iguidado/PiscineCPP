#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span	hello(5);

	try
	{
		hello.addNumber(2);
		hello.addNumber(4);
		hello.addNumber(12);
		hello.addNumber(2);
		hello.addNumber(2);
		std::cout << "shortest span = " << hello.shortestSpan() << std::endl;
		std::cout << "greatest span = " << hello.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
