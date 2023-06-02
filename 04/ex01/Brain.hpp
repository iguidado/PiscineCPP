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

		std::string	const &getIdeas(int i) const;
		void		setIdeas(std::string const &src, int i);
};
