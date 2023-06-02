#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string & stringREF = str;
	std::string * stringPTR = &str;

	std::cout << "str addr = " << &str << std::endl;
	std::cout << "strREF addr = " << &stringREF << std::endl;
	std::cout << "strPTR addr = " << stringPTR << std::endl;
	std::cout << "str value = " << str << std::endl;
	std::cout << "strREF value = " << stringREF << std::endl;
	std::cout << "strPTR value = " << *stringPTR << std::endl;
	return (0);
}
