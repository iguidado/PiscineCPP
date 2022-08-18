#pragma once
#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	protected:
		std::string	_name;
		int		_hp;
		int		_energy;
		int		_attack;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &src);
		~DiamondTrap(void);
		DiamondTrap &operator=(DiamondTrap const &src);

		void	whoAmI();
};
