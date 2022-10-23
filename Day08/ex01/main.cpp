#include "Span.hpp"
#include <iostream>

int	main(void)
{
	span	empty;
	Span	hello(5);

	empty.addNbr(5);
	try
	{
		int	arr[] = {1, 2, 3, 4, 5};
		int	size = sizeof(arr) / sizeof(arr[0]);

		std::vector<int>	vec(arr, arr + size);
		hello.addRange(vec.begin(), vec.end());
		std::cout << "shortest span = " << hello.shortestSpan() << std::endl;
		std::cout << "greatest span = " << hello.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	try
	{
		int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
		int	size = sizeof(arr) / sizeof(arr[0]);
	
		std::vector<int>	vec(arr, arr + size);
		hello.addRange(vec.begin(), vec.end());
		std::cout << "shortest span = " << hello.shortestSpan() << std::endl;
		std::cout << "greatest span = " << hello.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
