#include "Data.hpp"

Data::Data(void): _id(42), _name("placeholder")
{
}

Data::~Data(void) {}

void	Data::PrintClass(void) const
{
	std::cout << "Hello i'm Data struct holding id " << _id\
		<< " and string " << _name << std::endl;
}
