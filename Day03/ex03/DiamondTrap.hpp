#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std ::string _name;
	public:
	DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
	{
		_name = name;
		ClapTrap::_name = _name + "_clap_name";
		std::cout << "Summoned the perfect DiamondTrap" + _name << std::endl;
	}

	~DiamondTrap(void){
		std::cout << "DiamondTrap " + _name + " returned to dust. ;-;" << std::endl;
	}
	void	whoAmI();
};
