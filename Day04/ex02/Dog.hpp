#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public virtual Animal {
	protected:
		Brain		*_brain;
		std::string	_type;
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog & src);
		Dog & operator=(Dog &src);
		virtual void	makeSound();
};
