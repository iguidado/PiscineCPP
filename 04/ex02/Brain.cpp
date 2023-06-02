#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain died" << std::endl;
}

Brain::Brain(Brain & src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain is born by copy" << std::endl;
}

Brain & Brain::operator=(Brain & src)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain is born by assignation" << std::endl;
	return *this;
}
