#pragma once
#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		~FragTrap(void);

	void	highFivesGuys(void);
	void	printStat(void) const;
};
