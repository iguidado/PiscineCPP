#pragma once
#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat: public virtual Animal
{
	protected:
		Brain		*_brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat & src);
		Cat & operator=(Cat &src);

		void	makeSound() const;
};
