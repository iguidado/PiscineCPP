#pragma once
#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(Brain &src);
		 ~Brain(void);
		 Brain & operator=(Brain &src);
};
