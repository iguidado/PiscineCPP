#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	test;
	Animal	test2(test);
	Dog	dog1;
	Cat	cat1;

	test.makeSound();
	dog1.makeSound();
	cat1.makeSound();

	return (0);
}
