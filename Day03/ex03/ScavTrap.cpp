#include "ScavTrap.hpp"


ScavTrap::ScavTrap (void)
{ 
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
	std::cout << "You summoned a ScavTrap pup named : " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &src): ClapTrap()
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap" + _name + " entered in Gate Keeping mode." << std::endl;
}
