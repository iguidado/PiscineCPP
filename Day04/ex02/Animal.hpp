#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
//		Brain		*_brain;
		std::string	_type;
	public:
		virtual ~Animal(void);
		virtual Animal & operator=(Animal &src);
		
		virtual void	makeSound() = 0;
};
