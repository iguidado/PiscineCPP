#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{

	std::cout << std::endl;
	std::cout << "-----------------Constructor-----------------" << std::endl;
	std::cout << "//---------------Pointer-----------------" << std::endl;
	Animal *lst[2];
	lst[0] = new Cat();
	lst[1] = new Dog();
	std::cout << "//---------------Base class-----------------" << std::endl;
	Cat basic;
	Cat tmp = basic;
	Dog dog;
	Dog cpy(Dog);

	std::cout << std::endl;
	std::cout << "-----------------get Type-----------------" << std::endl;

	std::cout << "//---------------Pointer-----------------" << std::endl;
	std::cout << "Cat type " << lst[0]->getType() << std::endl;
	std::cout << "Dog type " << lst[1]->getType() << std::endl;
	std::cout << "//---------------Base class-----------------" << std::endl;
	std::cout << "Dog type " << dog.getType() << std::endl;
	std::cout << "Cat type " << tmp.getType() << std::endl;

	std::cout << std::endl;
	std::cout << "-----------------Destructor-----------------" << std::endl;
	std::cout << "//---------------Pointer-----------------" << std::endl;
	delete lst[0];
	delete lst[1];
	std::cout << "//---------------Base class-----------------" << std::endl;
	return (0);
}
