#include "PhoneBook.hpp"

void	print_formated(std::string str)
{
	std::cout << str << std::endl;
}

std::string	safe_input(void)
{
	std::string	str;

	std::cin >> str;
	while (!str.compare(""))
		std::cin >> str;
	return (str);
}

std::string	safe_readline(char *prompt)
{
	std::string	str;

	std::cin >> str;
	std::cout << prompt;
	while (!str.compare(""))
	{
		std::cout << prompt;
		std::cin >> str;
	}
	return (str);
}

int	main(void)
{
	int		exit;
	std::string	entry;

	exit = 0;
	while (!exit)
	{
		entry = safe_input();
		std::cout << entry;
		if (entry == "ADD")
			PhoneBook::AddContact();
		if (entry == "EXIT")
			exit = 1;
	}
	return (0);
}
