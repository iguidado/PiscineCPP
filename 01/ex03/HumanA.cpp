#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & starter): _weapon(starter), _name(name) 
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType()<< std::endl;
}

HumanA::~HumanA(void)
{
}
