#pragma once
#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat: public WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat & src);
		WrongCat & operator=(WrongCat &src);

		void	makeSound() const;
};
