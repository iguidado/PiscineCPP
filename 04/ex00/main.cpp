#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----------------Default constructor-------------" << std::endl;
	Dog	newDog;
	Cat	newCat;
	Animal	newAnimal;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal * meta = new Animal();
	const WrongAnimal* wrong = new WrongCat();

	std::cout << std::endl;
	std::cout << "---------------Cpy Contructor---------------" << std::endl;

	Animal	cpyAnimal(newAnimal);
	Dog	cpyDog(newDog);

	Cat	cpyCat(newCat);

	std::cout << std::endl;
	std::cout << "---------------Assign Contructor---------------" << std::endl;
	
	cpyAnimal = newAnimal;
	cpyDog = newDog;
	cpyCat = newCat;

	std::cout << std::endl;
	std::cout << "----------------Get Type-------------" << std::endl;

	std::cout << "Dog type = " << j->getType() << std::endl;
	std::cout << "Cat type = " << i->getType() << std::endl;
	std::cout << "Animal type = " << meta->getType()  << std::endl;


	std::cout << std::endl;
	std::cout << "----------------Make Sound-------------" << std::endl;
	std::cout << "Animal make :";
	meta->makeSound();
	std::cout << "The Cat make :";
	i->makeSound(); //will output the cat sound!
	std::cout << "The Dog make :";
	j->makeSound();
	std::cout << "Wrong Cat ";
	wrong->makeSound();


	std::cout << std::endl;
	std::cout << "----------------Destructor-------------" << std::endl;

	delete j;
	delete i;
	delete meta;
	delete wrong;
	return (0);
}
