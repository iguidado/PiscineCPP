#include <string>

class	ClapTrap
{
	public:
		std::string	_name;
		int		_hp;
		int		_energy;
		int		_attack;
	private:
	//	Claptrap(void);
		Claptrap(std::string name);
		Claptrap(Claptrap &src);
		~Claptrap(void);
		Claptrap &operator=(Claptrap const &src);
};
