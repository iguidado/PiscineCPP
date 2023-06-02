#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog defined as '" + _type + "' is born" << std::endl;
}

Dog::~Dog(void)
{
	delete  _brain;
	std::cout << "Dog defined as '" + _type + "' died" << std::endl;
}


Dog::Dog(Dog & src): Animal(), _brain(new Brain)
{
	*this = src;
	std::cout << "Dog copied as '" + _type + "' is born" << std::endl;
}

Dog & Dog::operator=(Dog & src)
{
	_type = src._type;

	*(this->_brain) = *(src._brain);
	std::cout << "Dog asigned as '" + _type + "' is born" << std::endl;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << _type + " Bark" << std::endl;
}