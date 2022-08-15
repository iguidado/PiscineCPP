#include "Dog.hpp"

Dog::Dog(void): _type("Dog")
{
	std::cout << "Dog defined as '" + _type + "' is born" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog defined as '" + _type + "' died" << std::endl;
}


Dog::Dog(Dog & src): _type(src._type)
{
	std::cout << "Dog copied as '" + _type + "' is born" << std::endl;
}

Dog & Dog::operator=(Dog & src)
{
	_type =src._type;
	std::cout << "Dog asigned as '" + _type + "' is born" << std::endl;
	return *this;
}

void	Dog::makeSound(void)
{
	std::cout << _type + " Bark" << std::endl;
}
