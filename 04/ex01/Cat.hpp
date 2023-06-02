#pragma once
#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat: public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat & src);
		Cat & operator=(Cat &src);

		virtual void	makeSound() const;
};
