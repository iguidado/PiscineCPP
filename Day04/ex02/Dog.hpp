#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public Animal {
	protected:
		std::string	_type;
		Brain		*_brain;
	public:
		Dog(void);
		virtual ~Dog(void);
		Dog(Dog & src);
		Dog & operator=(Dog &src);
		virtual void	makeSound();
};
