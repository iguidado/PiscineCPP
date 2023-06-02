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
	(*this) = src;
	// for (int i = 0; i < 100; i++)
	// 	this->ideas[i] = src.ideas[i];
	std::cout << "Brain is born by copy" << std::endl;
}

Brain & Brain::operator=(Brain & src)
{
	std::cout << "Brain is born by assignation" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	return *this;
}

std::string	const &Brain::getIdeas(int i) const
{
	if (i < 0)
		return (this->ideas[0]);
	if (i > 99)
			return (this->ideas[99]);
	return this->ideas[i];
}

void		Brain::setIdeas(std::string const &src, int i)
{
	if (i >= 0 && i < 100)
			this->ideas[i] = src;
}