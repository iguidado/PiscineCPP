#pragma once
#include <string>
#include <iostream>

class Harl
{
	private:
		static	void	debug(void);
		static	void	info(void);
		static	void	warning(void);
		static	void	error(void);
		void	(*discour[4])(void);
	public:
		void	complain(std::string level);
		Harl(void);
		~Harl(void);
};
