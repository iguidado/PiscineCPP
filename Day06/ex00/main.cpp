#include <string>
#include <climits>
#include <cfloat>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cerrno>

bool		isCharLit(std::string const &src)
{
		if (!isdigit(src[0]) && src.size() == 1)
		{
			return true;
		}
		if (src.size() == 3 && src[0] == '\'' && src[2] == '\'')
		{
			return true;
		}
		return false;
}

void	strShift_left(std::string &str)
{
	int	i = 0;

	while( str[i + 1])
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = str[i + 1];
}

bool isChar(std::string const &src)
{
	if (!std::isdigit(src[0]))
	{
		if (src[1] == 0)
			return (1);
	}
	if (src[0] == '\'' && src[1] != 0 && src[2] == src[0])
	{
		if (src[4] != 0)
			return (0);
		return (1);
	}
	return (0);
}

bool isInt(std::string const &src)
{
	int	i = 0;

	while (src[i] == ' ')
		i++;
	if (src[i] == '-' || src[i] == '+')
		i++;
	while (std::isdigit(src[i]))
		i++;
	if (src[i] == 0)
		return (true);
	return (false);
}

int	getType(std::string const &src)
{
	int	i = 0;

	if (src == "")
		return (-1);
	if (src == "nanf" || src == "-nanf")
		return (3);
	if (src == "inff" || src == "-inff")
		return (3);
	if (src == "nan" || src == "-nan")
		return (4);
	if (src == "inf" || src == "-inf")
		return (4);
	if (isChar(src))
		return (1);
	while (src[i] == ' ')
		i++;
	if (src[i] == '-' || src[i] == '+')
		i++;
	if (src[i] == 0)
		return (-1);
	while (std::isdigit(src[i]))
		i++;
	if (src[i] == 0)
		return (2);
	if (src[i] == '.')
		i++;
	while (std::isdigit(src[i]))
		i++;
	if (!src[i])
		return (3);
	if (src[i] == 'f' && !src[i + 1])
		return (4);
	return (0);
}

void	strTrim_dirty(std::string &str, char c)
{
	if (!str[0])
		return ;
	for (int i = 0; str[i + 1]; i++)
	{
		if (str[i] == c)
			strShift_left(str);
	}
}


void	printChar(char	c)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	printInt(std::string &input)
{
	long nbr;

	nbr = strtol(input.c_str(), NULL, 10);
	if (errno)
		std::cout << "errno = " << errno << std::endl;
	if (errno == ERANGE || nbr > INT_MAX || nbr < INT_MIN)
	{
		std::cout << "Input overflow base type" << std::endl;
		return ;
	}

//	Printing Char from int

	std::cout << "char: ";
	if (nbr > CHAR_MAX || nbr < CHAR_MIN)
		std::cout << "overflow";
	else if(!isprint(nbr))
		std::cout << "non printable";
	else
		std::cout << static_cast<char>(nbr);
	std::cout << std::endl;

// Print Int from Int

	std::cout << "int: " << nbr << std::endl;

//	Printing Float from int

	std::cout << "float: ";
	if (nbr > FLT_MAX || nbr < FLT_MIN)
		std::cout << "overflow";
	else
		std::cout << static_cast<float>(nbr);
	std::cout << std::endl;

// Printing Double from int

	std::cout << "double: ";
	if (nbr > DBL_MAX || nbr < DBL_MIN)
		std::cout << "overflow";
	else
		std::cout << static_cast<double>(nbr);
	std::cout << std::endl;
}

void	printFloat(std::string &input)
{
	double	nbr;

	nbr = strtod(input.c_str(), NULL);

	std::cout << "nbr = " << nbr << std::endl;
	if (errno == ERANGE)
	{
		std::cout << "Input overflow base type" << std::endl;
		return ;
	}
	std::cout << "hello" << std::endl;
	
// printing Char from Float

	std::cout << "char: ";
	if (!(nbr == nbr) || input.find("inf") != std::string::npos)
		std::cout << "impossible";
	else if (nbr > CHAR_MAX || nbr < CHAR_MIN)
		std::cout << "overflow";
	else if(!isprint(nbr))
		std::cout << "non printable";
	else
		std::cout << static_cast<char>(nbr);
	std::cout << std::endl;

// Int can't oveflow from float or double

	std::cout << "int: " ;
	 if (!(nbr == nbr) || input.find("inf") != std::string::npos)
		std::cout << "impossible";
	 else 
		 std::cout << static_cast<int>(nbr);
	 std::cout << std::endl;



	 std::cout << "float: " ;
	if (input.find("-inf") != std::string::npos )
		std::cout << "-inff";
	else if (input.find("inf") != std::string::npos)
		std::cout << "inff";
	else if (nbr > FLT_MAX || nbr < FLT_MIN)
		std::cout << "overflow";
	else if (nbr != nbr)
		std::cout << nbr << "f";
	else
		std::cout << static_cast<float>(nbr);
	std::cout << std::endl;

	std::cout << "double: " << nbr << std::endl;
}

int	main(int ac, char **av)
{
	int		type;
	if (ac != 2)
	{
		std::cerr << "There should be exactly 1 argument" << std::endl;
		return (-1);
	}

	std::string	input = av[1];
	type = getType(av[1]);
	if (type > 1)
	{
		strTrim_dirty(input, ' ');
		strTrim_dirty(input, '+');
	}
	switch (type) {
		case 1:
			strTrim_dirty(input, '\'');
			printChar(input[0]);
			break;
		case 2:
			printInt(input);
			break;
		case 3 ... 4:
			printFloat(input);
			break;
		default:
			std::cout << "Input Format not recognized" << std::endl;
			break;
	}
	return (0);
}
