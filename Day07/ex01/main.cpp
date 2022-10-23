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

int	main(void)
{
	char *lol = strdup("hello");

	iter(lol, 5, &ft_upper);
	std::cout << lol << std::endl;
	free(lol);
	return (0);
}
