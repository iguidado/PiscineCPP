#pragma once
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat: public Animal
{
	protected:
		std::string	_type;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat & src);
		Cat & operator=(Cat &src);

		virtual void	makeSound();
};
