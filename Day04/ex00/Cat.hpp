#pragma once
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat
{
	protected:
		std::string	_type;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat & src);
		Cat & operator=(Cat &src);

		void	makeSound();
};
