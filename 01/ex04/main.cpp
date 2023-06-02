#include <iostream>
#include <fstream>
#include <string>


int	main(int ac, char **av)
{
	std::string	buffer;
	int		pos;
	std::string	s1;
	std::string	s2;

	(void)ac;
	if (ac < 4 || ac > 4)
	{
		std::cout << "Error program take 3 arg as : \"filename\", \"s1\", \"s2\"" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (!ifs.good())
	{
		std::cout << av[1] << " : file not found" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	buffer = av[1];
	buffer+= ".replace";
	std::ofstream	ofs(buffer.c_str());
	while (std::getline(ifs, buffer))
	{
		if (ifs.eof())
			ifs.close();
		if (!s1.empty() && (pos = (buffer.find(s1))) != -1)
		{
			buffer.erase(pos, s1.size());
			buffer.insert(pos, s2);
		}
		ofs << buffer << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
}
