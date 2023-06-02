#include "BitcoinExchange.hpp"
#include <utility>
#include <string>

Btc::Btc()
{
}

Btc::~Btc()
{
}

Btc::Btc(std::string filename)
{
	std::ifstream	csv;
	std::string	line;
	std::string	date;
	std::string	rate;

	csv.open(filename.c_str(), std::fstream::in);
	if (!csv.is_open())
		throw Btc::OpenException();
	std::getline(csv, line);
	while (!csv.eof())
	{
		date = line.substr(0, line.find(','));
		rate = line.substr(line.find(',') + 1);
		this->insert_rate(date, std::atof(rate.c_str()));
		std::getline(csv, line);
	}
	csv.close();
}

double Btc::get_rate(std::string date) const
{
	std::map<std::string, double>::const_iterator it = _db.upper_bound(date);

	if (it == _db.begin())
		return ((it)->second);
	if (it++ == _db.end())
		return ((it--)->second);
	--it;
	--it;
	return (it->second);
}

void	Btc::insert_rate(std::string date, double rate)
{
	_db.insert(std::make_pair(date, rate));
	return ;
}

int	ft_check_digit(std::string value)
{
	std::string::const_iterator beg = value.begin();
	std::string::const_iterator end = value.end();

	while (beg != end)
	{
		if ((*beg != '-' && *beg != '.') && (*beg < '0' || *beg > '9'))
		{
			std::cout << "Error: Wrong value format => " << *beg << std::endl;
			return (0);
		}
		beg++;
	}
	return (1);
}

int	ft_check_value_bound(long	value)
{
	if (value < 0)
	{
		std::cout << "Error: not a positive number => " << value << std::endl;
		return (0);
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number => " << value <<  std::endl;
		return (0);
	}
	return (1);

}

int	ft_check_value_bound(double	value)
{
	if (value < 0.0)
	{
		std::cout << "Error: not a positive number" << std::endl;
		return (0);
	}
	if (value > 1000.0)
	{
		std::cout << "Error: too large a number" << std::endl;
		return (0);
	}
	return (1);
}

int	ft_check_value(std::string value)
{
	if (!ft_check_digit(value))
		return (0);
	if (value.find('.') != std::string::npos)
	{
		if (!ft_check_value_bound(std::atof(value.c_str())))
			return (0);
		return (1);
	}
	if (!ft_check_value_bound(std::atol(value.c_str())))
		return (0);
	return (2);
}

void	ft_print_result(Btc	*db, std::string date, double value)
{
	std::cout << date << " => " << value << " = " << value * db->get_rate(date) << std::endl;
}

void	ft_print_result(Btc	*db,std::string date, int value)
{
	std::cout << date << " => " << value << " = " << value * db->get_rate(date) << std::endl;
}

int	Btc::check_line(std::string line)
{
	if (line.find_first_not_of(CHARSET) != std::string::npos)
		return (1);
	return (0);
}

void	ft_strtrim(std::string &str)
{
	str.erase(str.find_last_not_of(" \t\n\v") + 1);
	str.erase(0, str.find_first_not_of(" \t\n\v"));
}

int	check_date(std::string date)
{
	int	idate[3] = { 0 };
	int	i = 0;
	int	j = 0;

	ft_strtrim(date);
	while (date[i])
	{	
		if (!isdigit(date[i]))
			return (1);
		while (isdigit(date[i]))
		{
			idate[j] = idate[j] * 10 + date[i] - '0';
			i++;
		}
		if (date[i] == '-')
			i++, j++;
	}
	if (idate[MONTH] > 12 || idate[DAY] > 31)
		return (1);
	return (0);
}

std::map<std::string, double> &Btc::get_db()
{
	return (this->_db);
}

std::string &Btc::get_type()
{
	return (this->type);
}

Btc	&Btc::operator=(Btc &cpy)
{
	this->type = cpy.get_type();
	this->_db = cpy.get_db();
	return (*this);
}

int	ft_treat_line(Btc *db, std::ifstream *bank)
{
	(void)db;
	std::string	line;
	std::string	date;
	std::string	value;
	size_t		pos;
	int		ret;

	std::getline(*bank, line);
	if (line.empty())
		return (1);
	pos = line.find('|');
	if (pos == std::string::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (0);
	}
	date = line.substr(0, pos);
	if (check_date(date))
	{
		std::cout << "Error: wrong date => " << date << std::endl;
		return (0);
	}

	value = line.substr(pos + 1);
	value = value.substr(value.find_first_not_of(' '));
	if ((ret = ft_check_value(value)))
	{
		if (ret == FLOAT)
			ft_print_result(db, date, std::atof(value.c_str()));
		if (ret == INTEGER)
			ft_print_result(db, date, std::atoi(value.c_str()));
	}
	return (0);
}
