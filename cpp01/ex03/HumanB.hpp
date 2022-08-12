#pragma once
#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		void	attack(void) const;

		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB(void);
};
