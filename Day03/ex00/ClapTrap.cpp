#include "Claptrap.hpp"

ClapTrap::Claptrap (std::string name): _name(name), _hp(10), _energy(10), _attack(10)
{
	return ;
}

ClapTrap::Claptrap (Claptrap const &src): _name(src._name), _hp(src._hp), _energy(src._energy), _attack(src._attack)
{
	return ;
}

Claptrap &operator=(Claptrap const &src)
{
	if (this == &src)
		return (*this);
	_name(src._name);
	_hp(src._hp);
	_energy(src._energy);
	_attack(src._attack);
	return (*this);
}
