#include "FragTrap.hpp"


FragTrap::FragTrap (void)
{ 
	this->_name = "FragTrap";
	this->_hp = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "You summoned the well engineered FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{ 
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "You summoned a copy of FragTrap named :" << _name << std::endl;
}

FragTrap::FragTrap(FragTrap &src): ClapTrap(src._name)
{ 
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_attack = src._attack;
	std::cout << _name << " used Mech Duplication. A Copy was create" << std::endl;
}

FragTrap::~FragTrap (void)
{
	std::cout << "FragTrap named " << _name << " Dissasembled." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives Guys !!! :D" << std::endl;
}
