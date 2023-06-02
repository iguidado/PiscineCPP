#include "Animal.hpp"

Animal::Animal(void): _type("")
{
	std::cout << "Animal defined as '" + _type + "' is born" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal defined as '" + _type + "' died" << std::endl;
}


Animal::Animal(Animal & src): _type(src._type)
{
	std::cout << "Animal copied as '" + _type + "' is born" << std::endl;
}

Animal & Animal::operator=(Animal & src)
{
	_type =src._type;
	std::cout << "Animal asigned as '" + _type + "' is born" << std::endl;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << _type + "made a generic Animal sound sound" << std::endl;
}

std::string const	&Animal::getType(void) const
{
	return _type;
}
