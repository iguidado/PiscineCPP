#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl2;

	if (ac == 1 || ac > 2)
	{
		harl2.complain("DEFAULT");
		return (0);
	}
	harl2.complain(av[1]);
	return (0);
}
