#include <string>
#include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int		_hp;
		int		_energy;
		int		_attack;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &src);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &src);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	bool	isDead(void) const;
};
