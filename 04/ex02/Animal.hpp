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
		Animal(Animal &src);
		virtual ~Animal(void);
		virtual Animal & operator=(Animal &src);
		
		virtual void	makeSound() const = 0;
		std::string	const &getType(void) const;
};
