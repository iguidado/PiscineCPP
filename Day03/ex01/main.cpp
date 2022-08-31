#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap hero;
	ClapTrap body("Newton");
	ClapTrap faker(hero);
	ScavTrap test1;

	hero.attack("Scav");
	body.takeDamage(12);
	body.attack("Scav");
	hero.beRepaired(656);
	test1.attack("Scav");
	return (0);	
}
