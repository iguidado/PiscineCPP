#pragma once
#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal {
	protected:
		std::string	_type;
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog & src);
		Dog & operator=(Dog &src);
		void	makeSound();
};
