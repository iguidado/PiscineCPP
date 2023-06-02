#include "BitcoinExchange.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Error: could not open file" << std::endl;
		return (1);
	}
	try
	{
		Btc		db("data.csv");
		std::ifstream	bank;
		std::string	disc;

		bank.open(av[1], std::fstream::in);
		if (!bank.is_open())
			throw Btc::OpenException();
		std::getline(bank, disc);
		while (!bank.eof())
		{
			if (ft_treat_line(&db, &bank))
				return (0);
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
