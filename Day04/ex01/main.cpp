#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

//	Animal	*createAnimals(int cat, int dog)
//	{
//		Animal *animals = new Animal[cat + dog];
//		int	i;
//	
//		i = -1;
//		if (i >= cat + dog)
//			return animals;
//		while (i < dog)
//		{
//			animals + i = new Dog();
//			i++;
//		}
//		while (i < dog + cat)
//		{
//			animals + i = new Cat();
//			i++;
//		}
//		return (animals);
//	}

int	main(void)
{
//	Animal	test;
//	Animal	test2(test);
//	Dog	dog1;
//	Cat	cat1;
//	
//	test.makeSound();
//	dog1.makeSound();
//	cat1.makeSound();

	Animal *dog = new Dog();
	Animal *cat = new Cat();

	delete dog;
	delete cat;
	return (0);
}
