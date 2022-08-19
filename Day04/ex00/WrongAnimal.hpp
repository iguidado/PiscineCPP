#include <string>
#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal & src);
		WrongAnimal & operator=(WrongAnimal &src);
		WrongAnimal & operator=(Animal &src);
		
		void	makeSound() const;
		std::string	getType() const;
};
