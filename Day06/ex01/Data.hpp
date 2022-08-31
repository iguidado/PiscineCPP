#pragma once
#include <iostream>
#include <string>

class	Data
{
	private :
		int			_id;
		std::string	_name;
	public :
		Data(void);
		~Data(void);
		void PrintClass(void) const;
};
