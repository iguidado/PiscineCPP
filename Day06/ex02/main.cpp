#include "Base.hpp"
#include <exception>
#include <iostream>
#include <cstdlib>

Base	*generate(void)
{
	Base	*ptr;
	int		rng;

	srand(time(0));

	rng = rand() % 3;

	if (!rng)
		ptr = new A;
	else if (rng == 1)
		ptr = new B;
	else
		ptr = new C;
	return (ptr);
}

void	identify(Base	*p)
{
	try
	{
		A	*real = dynamic_cast<A *>(p);
		if (real)
			std::cout << "real type ptr is :   A" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		B	*real = dynamic_cast<B *>(p);
		if (real)
			std::cout << "real type ptr is :   B" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		C	*real = dynamic_cast<C *>(p);
		if (real)
			std::cout << "real type ptr is :   C" << std::endl;
	}
	catch (std::exception & e)
	{
	}
}

void	identify(Base	&p)
{
	try
	{
		A	&real = dynamic_cast<A &>(p);
		(void)real;
		std::cout << "real type is :   A" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		B	&real = dynamic_cast<B &>(p);
		(void)real;
		std::cout << "real type is :   B" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		C	&real = dynamic_cast<C &>(p);
		(void)real;
		std::cout << "real type is :   C" << std::endl;
	}
	catch (std::exception & e)
	{
	}
}


int	main(void)
{
	Base	*ptr = generate();
	A	newA;
	
	identify(ptr);
	delete ptr;
	return (0);
}
