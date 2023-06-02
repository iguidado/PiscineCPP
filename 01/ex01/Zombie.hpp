#include <string>
#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie(void);
		Zombie(void);
		void	setName(std::string const name);
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);
