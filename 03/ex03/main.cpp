#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap body("Newton");
	DiamondTrap cpy;

	cpy = body;

	cpy.printStat();
	std::cout << std::endl;
	cpy.attack("TARGET");
	std::cout << std::endl;

//	std::cout << std::endl;
//	hero.attack("Scav");
//	body.takeDamage(12);
//	body.attack("Scav");
//	hero.beRepaired(656);
//	test1.attack("Scav");
	return (0);	
}
