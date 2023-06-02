#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public Animal {
	private:
		Brain	*_brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const &src);
		virtual void	makeSound() const;
};
