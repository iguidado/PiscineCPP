#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("")
{
	std::cout << "WrongAnimal defined as '" + _type + "' is born" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal defined as '" + _type + "' died" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal & src): _type(src._type)
{
	std::cout << "WrongAnimal copied as '" + _type + "' is born" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal & src)
{
	_type =src._type;
	std::cout << "WrongAnimal asigned as '" + _type + "' is born" << std::endl;
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << _type + "made a generic WrongAnimal sound sound" << std::endl;
}


std::string	WrongAnimal::getType() const
{
	return this->_type;
}
