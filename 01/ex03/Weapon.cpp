#include "Weapon.hpp"


std::string const &	Weapon::getType(void) const
{
	return _type;
}

void			Weapon::setType(std::string const & type)
{
	_type = type;
}

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon(void)
{
}
