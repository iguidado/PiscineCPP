#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name"), _name("Stardust*diamond")
{
	std::cout << "A stardust Diamond is born" << std::endl;
	this->_hp =  FragTrap::_hp;
	this->_energy =  ScavTrap::_hp;
	this->_attack =  FragTrap::_hp;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "A DiamondTrap named " + _name + " is born" << std::endl;
	this->_hp =  FragTrap::_hp;
	this->_energy =  ScavTrap::_hp;
	this->_attack =  FragTrap::_hp;
}

DiamondTrap::DiamondTrap(DiamondTrap &src): ClapTrap(src._name + "_clap_name"), FragTrap(), ScavTrap(), _name(src._name)
{
	std::cout << "Copied a DiamondTrap named " + _name << std::endl;
	this->_hp =  src._hp;
	this->_energy =  src._energy;
	this->_attack =  src._attack;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << "Assigned a DiamondTrap named " + _name << std::endl;
	this->_name = src._name;
	this->_hp =  src._hp;
	this->_energy =  src._energy;
	this->_attack =  src._attack;
	return *this;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " + _name + " was reduced to dust"<< std::endl;
 }

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " + _name + " a proud child of " + ClapTrap::_name + " the first !" << std::endl << std::endl;
}

