#include "Fixed.hpp"

Fixed::Fixed(void): _raw(0) {
	std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(Fixed const & origin): _raw(origin._raw) {
	std::cout << "Copy constructor called" << std::endl; }

Fixed::Fixed (int const src): _raw(src << _bits)
{
	std::cout << "Int constructor called" << std::endl; }
}

Fixed::Fixed(float src) {
	std::cout << "Float constructor called" << std::endl; }
	_raw = roundf(src * ( 1 << _bits)); }

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl; }

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

int			Fixed::toInt(void) const
{
	return 	_raw >> _bits;
}

float			Fixed::toFloat(void) const
{
	return ((float)_raw / (1 << _bits));
}

void	Fixed::setRawBits(int	const & raw)
{
	this->_raw = raw;
}

std::ostream	&operator<<(std::ostream &os, const Fixed &src)
{
	os << src.toFloat();
	return (os);
}

Fixed		&Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_raw = src.getRawBits();
	return *this;
}
