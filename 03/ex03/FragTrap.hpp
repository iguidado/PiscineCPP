#pragma once
#include "ClapTrap.hpp"

class	FragTrap: public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		~FragTrap(void);

	void	highFivesGuys(void);
};
