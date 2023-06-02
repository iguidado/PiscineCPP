#include "iter.hpp"
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <cstring>

void	ft_upper(char	&c)
{
	if (islower(c))
	{
		c = toupper(c);
	}
}

void	ft_set(int &entry)
{
	static	int value = 0;

	entry = value;
	value = (value + 1) % 10;
}

template <typename T>
void	print(T &input)
{
	std::cout << input << std::endl;
}

int	main(void)
{
	char *lol = strdup("hello");
	int	 *test = new int[10]();

	iter(test, 10, ft_set);
	iter(test, 10, print<int>);
	iter(lol, 5, &ft_upper);
	std::cout << lol << std::endl;
	free(lol);
	return (0);
}
