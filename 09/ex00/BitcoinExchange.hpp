#include <map>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <utility>
#include <sstream>

#define	FLOAT	1
#define	INTEGER 2


enum e_date
{
	YEAR,
	MONTH,
	DAY
};

#define CHARSET "-0123456789"



class Btc
{
	private:
		std::string		type;
		std::map<std::string, double> _db;
		int	check_line(std::string line);
	public:
		Btc();
		Btc(std::string filname);
		Btc(Btc	*cpy);
		~Btc();
		std::map<std::string, double> &get_db();
		std::string &get_type();
		double get_rate(std::string date) const;
		void	insert_rate(std::string date, double rate);
		class  OpenException : public std::exception { 
			const char *what() const throw() { return "could not open file"; }
			};
		Btc	&operator=(Btc &cpy);
};

void	ft_print_result(Btc *db, std::string date, double value);
void	ft_print_result(Btc *db, std::string date, int value);

int	ft_check_date(std::string	date);


int	ft_treat_line(Btc *db, std::ifstream *bank);
int	ft_check_value(std::string value);
int	ft_check_value_bound(double	value);
int	ft_check_value_bound(long	value);
int	ft_check_digit(std::string value);
