#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL), _name(name)
{
	return ;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (!_weapon)
	{
		std::cout << _name << " attacks barehanded" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::~HumanB(void)
{
}
