#include "Span.hpp"

Span::Span(void): _N(0)
{
}


Span::Span(unsigned	const int &N): _N(N)
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
	_tab = rhs._tab;
	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(int	const &nbr)
{
	static	unsigned int	i = 0;

	if (i >= _N)
		throw TabFullException();
	_tab.push_back(nbr);
	i++;
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	min = 0;
	int	nbr = INT_MAX;


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

unsigned int	Span::longestSpan(void) const
{
	std::vector<int>::iterator	beg = _tab.begin();
	std::vector<int>::iterator	end = _tab.end();
	std::vector<int>::iterator	min;

	if (_N <= 1)
	{
		throw (SpanTooShortException());
	}

	min = std::min_element(beg, end);
	//	std::vector::iterator	max = std::max_element(_tab.begin(), _tab.end());
	return (0);
}

void		Span::addSpan(unsigned int begin, unsigned int const &end)
{
	while (begin != end)
	{
		this->addNumber(begin);
		begin++;
	}
}

