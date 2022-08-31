#pragma once
#include <string>
#include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		Brain	&operator=(Brain const & src);
	private:
		std::string	ideas[100];
};
