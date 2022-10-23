#include "Span.hpp"

Span::Span(void): _N(0), _totalNbr(0)
{
}

Span::Span(unsigned	const int &N): _N(N), _totalNbr(0)
{
	_tab.reserve(_N);
}

Span::Span(Span const &rhs)
{
	*this = rhs;
}

Span	&Span::operator=(Span const &rhs)
{
	_N = rhs._N;
	_totalNbr = rhs._totalNbr;
	_tab = rhs._tab;
	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(int	const &nbr)
{
	if (_totalNbr >= _N)
		throw TabFullException();
	_tab.push_back(nbr);
	_totalNbr++;
}

void	Span::addRange(std::vector<int>::iterator	it, std::vector<int>::iterator ite)
{

	if (ite - it > this->_N - this->_totalNbr)
		throw SpanTooShortException();
	std::vector<int>::iterator this_it = this->_tab.begin() + this->_totalNbr;
	_totalNbr += ite - it;
	std::copy(it, ite, this_it);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	min = INT_MAX;
	unsigned int	nbr;


	if (_N <= 1)
		throw (SpanTooShortException());
	for (unsigned int i = 0; i + 1 < _N; i++)
	{
		for (unsigned int j = i + 1; j < _N; j++)
		{
			if ((nbr = static_cast<unsigned int>(abs(_tab[i] - _tab[j]))) < min)
				min = nbr;
		}
	}
	return (min);
}

unsigned int	Span::longestSpan(void)
{
	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;
	
	if (_N <= 1)
	{
		throw (SpanTooShortException());
	}
	min = std::min_element(_tab.begin(), _tab.end());
	max = std::max_element(_tab.begin(), _tab.end());
	return (static_cast<unsigned int>(*max - *min));
}
