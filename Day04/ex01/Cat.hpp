#pragma once
#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat: public Animal
{
	protected:
		std::string	_type;
		Brain		*_brain;
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat(Cat & src);
		Cat & operator=(Cat &src);

		void	makeSound();
};
