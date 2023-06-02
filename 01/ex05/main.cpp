#include "Harl.hpp"

int	main(void)
{
	Harl	harl2;

	harl2.complain("debug");
	harl2.complain("info");
	harl2.complain("warning");
	harl2.complain("error");
	harl2.complain("Garbage value");
	return (0);
}
