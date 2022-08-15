#pragma once
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &src);
		~ScavTrap(void);

	void	guardGate(void);
};
