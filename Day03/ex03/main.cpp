#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
//	ClapTrap hero;
//	ClapTrap body("Newton");
//	ClapTrap faker(hero);
//	ScavTrap test1;
	DiamondTrap	test("Hello");
	std::cout << std::endl;
	DiamondTrap	def;
	DiamondTrap	cpy = test;

	std::cout << std::endl;
	test.whoAmI();
	std::cout << std::endl;

	DiamondTrap hello(def);
	std::cout << std::endl;
//	hero.attack("Scav");
//	body.takeDamage(12);
//	body.attack("Scav");
//	hero.beRepaired(656);
//	test1.attack("Scav");
	return (0);	
}
