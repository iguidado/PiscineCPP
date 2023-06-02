#include "ScavTrap.hpp"


ScavTrap::ScavTrap (void)
{ 
	this->_name = "ScavTrap";
	this->_hp = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "You summoned ScavTrap pack-leader" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{ 
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "You summoned a ScavTrap pup named :" << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &src): ClapTrap(src._name)
{ 
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_attack = src._attack;
	std::cout << "ScavTrap" << _name << " Called a mate. A Copy was created" << std::endl;
}

ScavTrap::~ScavTrap (void)
{
	std::cout << "ScavTrap named " << _name << " was set free." << std::endl;
}

void	ScavTrap::attack(const std::string &target) const
{
	std::cout << "ScavTrap " + _name + " ferociously attacked " + target << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " + _name + " entered in Gate Keeping mode." << std::endl;
}

void	ScavTrap::printStat(void) const
{
	std::cout << "name = " << _name << std::endl;
	std::cout << "ClapTrap name = " << ClapTrap::_name << std::endl;
	std::cout << "hp = " << _hp << std::endl;
	std::cout << "energy = " << _energy << std::endl;
	std::cout << "attack = " << _attack << std::endl << std::endl;
}
