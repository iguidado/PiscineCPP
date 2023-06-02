#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap hero;
	FragTrap body("Newton");
	ClapTrap faker(hero);
	FragTrap test1;

	hero.attack("Scav");
	body.takeDamage(12);
	body.attack("Scav");
	hero.beRepaired(656);
	body.attack("Scav");
	std::cout << std::endl;
	body.printStat();
	return (0);	
}
