#pragma once
#include <climits>
#include <exception>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

class	Span
{
	private:
		unsigned int			_N;
		unsigned int			_totalNbr;
		std::vector<int>		_tab;
		Span(void);
	public:
		Span(unsigned const int &N);
		~Span(void);
		Span(Span const &rhs);
		
		Span &operator=(Span const &rhs);

		void	addNumber(int const &nbr);
		void	addRange(std::vector<int>::iterator	it, std::vector<int>::iterator ite);

		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);


		class	TabFullException: public std::exception
		{ const char *what(void) const throw() { return "Tab is full !"; } };
		class	SpanTooShortException: public std::exception
		{ const char *what(void) const throw() { return "Span is too short"; } };
};
