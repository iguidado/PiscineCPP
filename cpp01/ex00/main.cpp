#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heaped;

	randomChump("Stacked");
	heaped = newZombie("Heaped");
	delete(heaped);
}
