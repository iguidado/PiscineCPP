#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	boss("Boss", 150);
	Bureaucrat	boss1(boss);
	Bureaucrat	boss2;

	std::cout << boss << std::endl;
	return (0);
}
