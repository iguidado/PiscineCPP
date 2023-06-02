#pragma once
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T		*_tab;
		unsigned int	_size;
	public:
		Array(void);
		Array(Array &src);
		Array(unsigned int n);
		~Array(void);

		class IndexOutOfBound: public std::exception { const char *what(void) const throw(); };

		unsigned int const &size(void);

		T &operator[](unsigned int index);
		Array	&operator=(Array &rhs);
};

template <typename T>
Array<T>::Array(void)
{
	_tab = new T[0];
	_size = 0;
}

template <typename T>
unsigned int const &Array<T>::size(void)
{
	return (_size);
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_tab = new T[n]();
	_size = n;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] _tab;
}

template <typename T>
Array<T>::Array(Array &src)
{
	this->_tab = NULL;
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &rhs)
{
	if (this->_tab)
		delete [] this->_tab;
	_size = rhs._size;
	_tab = new T[_size]();
	
	for (unsigned int i = 0; i < _size; i++)
	{
		_tab[i] = rhs._tab[i];
	}
	return (*this);
}

template <typename T>
const	char	*Array<T>::IndexOutOfBound::what() const throw()
{
	return ("Index specified is out of bound");
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw Array<T>::IndexOutOfBound();
	return (this->_tab[index]);
}
