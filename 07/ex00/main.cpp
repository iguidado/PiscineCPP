#include "whatever.hpp"

int	main(void)
{
	int inbr = 10;
	int inbr2 = 42;
	float fnbr = 10.12342;
	float fnbr2 = 0.098765;


	std::cout << "INT: a = " << inbr << ", b = " << inbr2 << std::endl;
	swap(inbr, inbr2);
	std::cout << "after swap a = " << inbr << ", b = " << inbr2 << std::endl;
	std::cout << "min inbr = " << min(inbr, inbr2) << std::endl;
	std::cout << "max inbr = " << max(inbr, inbr2) << std::endl;


	std::cout << "a = " << fnbr << ", b = " << fnbr2 << std::endl;
	swap(fnbr, fnbr2);
	std::cout << "after swap a = " << fnbr << ", b = " << fnbr2 << std::endl;
	std::cout << "min fnbr = " << min(fnbr, fnbr2) << std::endl;
	std::cout << "max fnbr = " << max(fnbr, fnbr2) << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
