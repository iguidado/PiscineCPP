#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal & src);
		Animal & operator=(Animal &src);
		
		virtual void	makeSound()const;
		std::string const	&getType(void) const;
};
