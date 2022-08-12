#pragma once
#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		Weapon		&_weapon;
		std::string	_name;
	public:
		void	attack(void) const;

		HumanA(std::string name, Weapon & starter);
		~HumanA(void);
};
