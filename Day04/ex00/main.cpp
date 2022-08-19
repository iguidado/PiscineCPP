#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	WrongAnimal*	wrong = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;


	wrong->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return (0);
}
