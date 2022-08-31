#include "Cat.hpp"

Cat::Cat(void): _type("Cat"), _brain(new Brain)
{
	std::cout << "Cat defined as '" + _type + "' is born" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat defined as '" + _type + "' died" << std::endl;
}


Cat::Cat(Cat & src): Animal(), _type(src._type), _brain(new Brain)
{
	std::cout << "Cat copied as '" + _type + "' is born" << std::endl;
}

Cat & Cat::operator=(Cat & src)
{
	_type = src._type;
	*_brain = *(src._brain);
	std::cout << "Cat asigned as '" + _type + "' is born" << std::endl;
	return *this;
}

void	Cat::makeSound(void)
{
	std::cout << _type + " moew :3" << std::endl;
}
