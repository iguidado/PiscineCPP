#include "Span.hpp"
#include <iterator>

int	main(void)
{
	Span	hello(5);

	try
	{
	Span			sp(30000);
	std::vector<int> 	vec;

	srand(time(0));
		std::cout << "Adding in Span random between -50000 and 50000" << std::endl;

	for (int i = 0; i < 20000; i++)
	{
		vec.push_back(rand() % 100000 - 5000);
	}
		sp.addRange(vec.begin(), vec.end());
		std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "greatest span = " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;

	try
	{
		std::cout << "Trying to add number to a 0 size span" << std::endl;
	Span	empty(0);

		empty.addNumber(5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span	test(5);

		std::cout << "Adding in Span 10 20 30 40 50" << std::endl;
		test.addNumber(10);
		test.addNumber(20);
		test.addNumber(30);
		test.addNumber(40);
		test.addNumber(50);
		std::cout << "shortest span = " << test.shortestSpan() << std::endl;
		std::cout << "greatest span = " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	try
	{
		Span	test(5);

		std::cout << "Adding in Span 10 20 30 50 50" << std::endl;
		test.addNumber(10);
		test.addNumber(20);
		test.addNumber(30);
		test.addNumber(50);
		test.addNumber(50);
		std::cout << "shortest span = " << test.shortestSpan() << std::endl;
		std::cout << "greatest span = " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	try
	{
		Span	test(2);

		std::cout << "Adding in Span -10 10" << std::endl;
		test.addNumber(-10);
		test.addNumber(10);
		std::cout << "shortest span = " << test.shortestSpan() << std::endl;
		std::cout << "greatest span = " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	try
	{
		std::cout << "Adding in Array 2 3 5 7 8" << std::endl;

		int	arr[] = {2, 3, 5, 7, 8};
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
	std::cout << "--------------------------------------" << std::endl;


	//	try
	//	{
	//		int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	//		int	size = sizeof(arr) / sizeof(arr[0]);
	//	
	//		std::vector<int>	vec(arr, arr + size);
	//		hello.addRange(vec.begin(), vec.end());
	//		std::cout << "shortest span = " << hello.shortestSpan() << std::endl;
	//		std::cout << "greatest span = " << hello.longestSpan() << std::endl;
	//	}
	//	catch (std::exception &e)
	//	{
	//		std::cout << e.what() << std::endl;
	//	}
	return (0);
}
