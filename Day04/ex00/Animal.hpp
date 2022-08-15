#pragma once
#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		~Animal(void);
		Animal(Animal & src);
		Animal & operator=(Animal &src);
		
		void	makeSound();
};
