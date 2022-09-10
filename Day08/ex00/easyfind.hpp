#pragma once
#include <algorithm>
#include <iostream>
#include <exception>

class DidNotFind: public std::exception
{
	const char *what(void) const throw() { return "No occurence of nbr"; };
};

template <typename T>
typename T::iterator easyfind(T	&ptr, int nbr)
{
	typename T::iterator	it_begin = ptr.begin();
	typename T::iterator	it_end = ptr.end();

	it_begin = find(it_begin, it_end, nbr);
	if (it_begin == it_end)
		throw DidNotFind();

	return (it_begin);
}
