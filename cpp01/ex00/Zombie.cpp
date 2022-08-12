#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->name + " decayed, leaving a strong smell behind him" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
