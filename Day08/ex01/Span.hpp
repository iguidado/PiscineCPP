#pragma once
#include <climits>
#include <exception>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>

class	Span
{
	private:
		unsigned int			_N;
		std::vector<int>		_tab;
	public:
		Span(void);
		Span(unsigned const int &N);
		~Span(void);
		Span(Span const &rhs);
		
		Span &operator=(Span const &rhs);

		void	addNumber(int const &nbr);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void			addSpan(unsigned int begin, unsigned int const &end);

		class	TabFullException: public std::exception
		{ const char *what(void) const throw() { return "Tab is full !"; } };
		class	SpanTooShortException: public std::exception
		{ const char *what(void) const throw() { return "Span is too short"; } };
};
