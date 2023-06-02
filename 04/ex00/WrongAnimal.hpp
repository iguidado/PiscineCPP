#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal & src);
		WrongAnimal & operator=(WrongAnimal &src);
		
		void	makeSound() const;
		std::string	getType() const;
};
