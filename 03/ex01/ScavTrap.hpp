#pragma once
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &src);
		~ScavTrap(void);

	void	attack(const std::string &target) const;
	void	guardGate(void) const;
	void	printStat(void) const;
};
