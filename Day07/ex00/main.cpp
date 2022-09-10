#include "whatever.hpp"

template <typename T>
void	swap(T &a, T &b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

template <typename T>
T	&min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T	&max(T &a, T &b)
{
	return (a > b ? a : b);
}

int	main(void)
{
	int inbr = 10;
	int inbr2 = 42;
	float fnbr = 10.12342;
	float fnbr2 = 0.098765;


	swap(inbr, inbr2);
	std::cout << "a = " << inbr << ", b = " << inbr2 << std::endl;
	std::cout << "min inbr = " << min(inbr, inbr2) << std::endl;
	std::cout << "max inbr = " << max(inbr, inbr2) << std::endl;

	std::cout << "min fnbr = " << min(fnbr, fnbr2) << std::endl;
	std::cout << "max fnbr = " << max(fnbr, fnbr2) << std::endl;

	return (0);
}
