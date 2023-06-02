#include "PmergeMe.hpp"

template <typename T>
clock_t	ft_fill_cont(char **av, T &cont)
{
	clock_t		btime;
	clock_t		ctime;
	int		nbr;
	std::string	tmp;
	std::stringstream	ss;

	btime = std::clock();
	while (*av)
	{
		if (!str_isdigit(*av))
			throw	std::exception();
		tmp = *av;
		ss << tmp;
		ss >> nbr;
		cont.push_back(nbr);
		ss.clear();
		av++;
	}
	ctime = std::clock();
	return (ctime - btime);
}

void	ft_print_cont(std::vector<int, std::allocator<int> >& cont)
{
	std::vector<int, std::allocator<int> >::iterator	itb = cont.begin();
	std::vector<int, std::allocator<int> >::iterator	ite = cont.end();

	while (itb != ite)
	{
		std::cout <<  *itb << " ";
		itb++;
	}
	std::cout << std::endl;
}

void	ft_print_cont(std::deque<int, std::allocator<int> >& cont)
{
	std::deque<int, std::allocator<int> >::iterator	itb = cont.begin();
	std::deque<int, std::allocator<int> >::iterator	ite = cont.end();

	while (itb != ite)
	{
		std::cout <<  *itb << " ";
		itb++;
	}
	std::cout << std::endl;
}

int	ft_strisempty(char *str)
{
	while (*str == '\n' || *str == ' ' || *str == '\v' || *str == '\t' || *str == 'r')
		str++;
	if (!*str)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	std::vector<int>	nbrvec;
	std::deque<int>		nbrlst;
	clock_t			timevec;
	clock_t			timelst;

	if (ac == 1 || ft_strisempty(av[1]))
	{
		std::cout << "Error: wrong input" << std::endl;
		return (1);
	}
	try
	{
		timevec = std::clock();
		ft_fill_cont(av + 1, nbrvec);
		std::cout << "Before: ";
		ft_print_cont(nbrvec);
		std::cout << std::endl;
		ft_merge_sort(nbrvec);
		std::cout << "after: ";
		ft_print_cont(nbrvec);
		std::cout << std::endl;
		timevec = (std::clock() - timevec) * (CLOCKS_PER_SEC / 1000000);
		std::cout << "Time to process a range of "<< ac - 1 << " elements with std::vector " << timevec<< " us" << std::endl << std::endl;

		timelst = std::clock();
		ft_fill_cont(av + 1, nbrlst);
		ft_merge_sort(nbrlst);
		timelst = (std::clock() - timelst) * (CLOCKS_PER_SEC / 1000000);
		std::cout << "Time to process a range of "<< ac - 1 << " elements with std::deque " << timelst<< " us" << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: wrong input" << std::endl;
		return (1);
	}
	return (0);
}
