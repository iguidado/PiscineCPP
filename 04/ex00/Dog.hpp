#pragma once
#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal {
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog & src);
		Dog & operator=(Dog &src);
		virtual void	makeSound() const;
};
