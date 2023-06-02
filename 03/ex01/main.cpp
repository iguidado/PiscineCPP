#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test1("Scavcy");

	std::cout << std::endl;
	test1.takeDamage(16);
	std::cout << std::endl;
	test1.attack("Scav");
	std::cout << std::endl;
	test1.printStat();
	return (0);	
}
