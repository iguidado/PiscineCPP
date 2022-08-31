#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap hero;
	ClapTrap body("Newton");
	ClapTrap faker(hero);

	hero.attack("Scav");
	body.takeDamage(12);
	body.attack("Scav");
	hero.beRepaired(656);
	return (0);	
}
