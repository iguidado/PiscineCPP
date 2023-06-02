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

void	FragTrap::printStat(void) const
{
	std::cout << "name = " << _name << std::endl;
	std::cout << "ClapTrap name = " << ClapTrap::_name << std::endl;
	std::cout << "hp = " << _hp << std::endl;
	std::cout << "energy = " << _energy << std::endl;
	std::cout << "attack = " << _attack << std::endl << std::endl;
}
