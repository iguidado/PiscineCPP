#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{

	std::cout << std::endl;
	std::cout << "-----------------Constructor-----------------" << std::endl;
	Animal *lst[3];
	lst[0] = new Cat();
	lst[1] = new Dog();
	lst[2] = new Animal();
	Cat basic;
	Cat foo;

	Cat tmp = basic;

	basic = foo;

	Dog dog;
	std::cout << "------1---------" << std::endl;
	Dog cpy(dog);
	std::cout << "------2---------" << std::endl;

	std::cout << std::endl;
	std::cout << "-----------------get Type-----------------" << std::endl;

	std::cout << "Cat type " << lst[0]->getType() << std::endl;
	std::cout << "Dog type " << lst[1]->getType() << std::endl;
	std::cout << "Animal type " << lst[2]->getType() << std::endl;
	std::cout << "Dog type " << dog.getType() << std::endl;

	std::cout << std::endl;
	std::cout << "-----------------Destructor-----------------" << std::endl;

	delete lst[0];
	delete lst[1];
	delete lst[2];

	return (0);
}
