#pragma once
#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat: public Animal
{
	protected:
		Brain		*_brain;
		std::string	_type;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat & src);
		Cat & operator=(Cat &src);

		void	makeSound();
};
