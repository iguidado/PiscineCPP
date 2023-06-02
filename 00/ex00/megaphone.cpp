#include <iostream>
#include <cctype>

char	*str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
 	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (av[++i])
		std::cout << str_toupper(av[i]);
	std::cout << std::endl;
	return (0);
}
