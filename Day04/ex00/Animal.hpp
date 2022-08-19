#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal & src);
		Animal & operator=(Animal &src);
		
		virtual void	makeSound() const;
		std::string	getType() const;
};
