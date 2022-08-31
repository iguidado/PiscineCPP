#include "Brain.hpp"


Brain::Brain(void)
{
	for (int i = 0; i < 100; i ++)
	{
		this->ideas[i] = "Thought";
	}
	std::cout << "Brain created" << std::endl;
}


Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	std::cout << "Brain copied" << std::endl;
}


Brain &Brain::operator=(Brain const &src)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain assigned" << std::endl;
	return (*this);
}
