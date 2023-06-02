#include "Base.hpp"
#include "identify.hpp"

int	main(void)
{
	Base	*ptr = generate();
	A	newA;
	
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return (0);
}
