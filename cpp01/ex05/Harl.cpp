#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my"
		<<"7XL-double-cheese-triple-pickle-special-ketchup burger."
	       	<<"I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working"
		<< " here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	this->discour[0] = this->debug;
	this->discour[1] = this->info ;
	this->discour[2] = this->warning;
	this->discour[3] = this->error ;
	std::string 	lkup[5] = { "debug", "info", "warning", "error" };

	for (int i = 0; i < 4; i++)
	{
		if (level == lkup[i])
		{
			discour[i]();
			return ;
		}
	}
	std::cout << "I can't complain with such a bad indication." << std::endl;
}

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}
