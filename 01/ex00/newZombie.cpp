#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *armless = new Zombie(name);

	armless->announce();
	return (armless);
}
