#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		Brain		*_brain;
		std::string	_type;
	public:
		Animal(void);
		~Animal(void);
		Animal(Animal & src);
		Animal & operator=(Animal &src);
		
		void	makeSound();
};
