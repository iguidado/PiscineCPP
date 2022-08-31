#pragma once
#include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		std::string const &	getType(void) const;
		void			setType(std::string const & type);

					Weapon(std::string type);
					~Weapon(void);
};
