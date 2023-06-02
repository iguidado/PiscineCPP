#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(10, "Hordes");

	delete [] (horde);
	return (0);
}
