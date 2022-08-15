#include "ClapTrap.hpp"


ClapTrap::ClapTrap (void): _name("ClapTrap"), _hp(10), _energy(10), _attack(10)
{ 
	std::cout << "You summoned the great ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _attack(10)
{ 
	std::cout << "You summoned a copy of ClapTrap named :" << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src): _name(src._name), _hp(src._hp), _energy(src._energy), _attack(src._attack) 
{ 
	std::cout << _name << " use Kage bushin no jutsu. A double was create" << std::endl;
}

ClapTrap::~ClapTrap (void)
{
	std::cout << _name << " Dissasembled." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	if (this == &src)
		return (*this);
	_name= src._name;
	_hp= src._hp;
	_energy= src._energy;
	_attack= src._attack;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->isDead())
		return ;
	std::cout << _name + " attacks " + target + " causing " << _attack << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name + " Took " << amount << " dmg !!" << std::endl;
	this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name + " restaured " << amount << " hp :)" << std::endl;
	this->_hp += amount;
}

bool	ClapTrap::isDead(void) const
{
	if (_hp <= 0 || _energy <= 0)
	{
		std::cout << _name << " can't move"<< std::endl;
		return (true);
	}
	return (false);
}
