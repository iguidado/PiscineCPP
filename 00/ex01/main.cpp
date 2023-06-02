#include "PhoneBook.hpp"

void	print_formated(std::string str)
{
	std::cout << str << std::endl;
}

std::string	safe_input(void)
{
	std::string	str;

	std::getline(std::cin, str);
	while (str == "")
	{
		if (std::cin.eof())
			std::exit(1);
		std::getline(std::cin, str);
	}
	return (str);
}

std::string	safe_readline(std::string prompt)
{
	std::string	str;

	std::cout << prompt;
	std::getline(std::cin, str);
	while (str == "")
	{
		if (std::cin.eof())
			std::exit(1);
		std::cout << prompt;
		std::getline(std::cin, str);
	}
	return (str);
}

int	main(void)
{
	std::string	entry;
	PhoneBook	repertory;
	int		exit = 0;

	while (!exit)
	{
		std::cout << "Please enter a command between ( ADD | SEARCH | EXIT )" << std::endl;
		entry = safe_input();
		if (entry == "SEARCH")
			repertory.LstContact();
		else if (entry == "ADD")
			repertory.AddContact();
		else if (entry == "EXIT")
			exit = 1;
		else
			std::cout << "I did not understand your command" << std::endl << std::endl;
	
	}
	return (0);
}
