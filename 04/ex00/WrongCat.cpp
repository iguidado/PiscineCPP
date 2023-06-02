#include "WrongCat.hpp"

WrongCat::WrongCat(void): _type("WrongCat")
{
	std::cout << "WrongCat defined as '" + _type + "' is born" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat defined as '" + _type + "' died" << std::endl;
}


WrongCat::WrongCat(WrongCat & src): WrongAnimal(), _type(src._type)
{
	std::cout << "WrongCat copied as '" + _type + "' is born" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat & src)
{
	_type =src._type;
	std::cout << "WrongCat asigned as '" + _type + "' is born" << std::endl;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << _type + " moew :3" << std::endl;
}
