#include "Fixed.hpp"

Fixed::Fixed(void): _raw(0) {
	std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(Fixed const & origin): _raw(origin._raw) {
	std::cout << "Copy constructor called" << std::endl; }

Fixed::Fixed (int const src): _raw(src << 8)
{
}

Fixed::Fixed(float src) {
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

int	Fixed::bitsMask(void) const
{
	int	bitsMask = 0;

	bitsMask = ~bitsMask << this->_bits;
	return bitsMask;
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


Fixed const	&Fixed::min(Fixed const &src, Fixed const &that)
{
	return (src.getRawBits() > that.getRawBits() ? that : src);
}

Fixed 	&Fixed::min(Fixed &src, Fixed &that)
{
	return (src.getRawBits() > that.getRawBits() ? that : src);
}

Fixed const	&Fixed::max(Fixed const &src, Fixed const &that)
{
	return (src.getRawBits() < that.getRawBits() ? that : src);
}

Fixed 	&Fixed::max(Fixed &src, Fixed &that)
{
	return (src.getRawBits() < that.getRawBits() ? that : src);
}

bool 	Fixed::operator>(Fixed const &src) const
{
	return this->_raw > src.getRawBits();
}

bool 	Fixed::operator<(Fixed const &src) const
{
	return this->_raw < src.getRawBits();
}

bool 	Fixed::operator<=(Fixed const &src) const
{
	return this->_raw <= src.getRawBits();
}

bool 	Fixed::operator>=(Fixed const &src) const
{
	return this->_raw >= src.getRawBits();
}

bool 	Fixed::operator==(Fixed const &src) const
{
	return this->_raw == src.getRawBits();
}

bool 	Fixed::operator!=(Fixed const &src) const
{
	return this->_raw != src.getRawBits();
}

Fixed 	Fixed::operator+(Fixed const &src) const
{
	Fixed	cpy(*this);

	cpy.setRawBits(this->_raw + src.getRawBits());
	return (cpy);
}

Fixed 	Fixed::operator-(Fixed const &src) const
{
	Fixed	cpy(*this);

	cpy.setRawBits(this->_raw - src.getRawBits());
	return (cpy);
}

Fixed	Fixed::operator*(Fixed const &src) const
{
	Fixed	cpy(this->toFloat() * src.toFloat());

	return (cpy);
}

Fixed	&Fixed::operator++()
{
	this->_raw += 1;
	return (*this);
}

float	Fixed::operator++(int	incr)
{
	float tmp;

	tmp = this->toFloat();
	this->_raw += 1 + incr;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->_raw -= 1;
	return (*this);
}

float	Fixed::operator--(int incr)
{
	float	tmp;

	tmp = this->toFloat();
	this->_raw += 1 + incr;
	return (tmp);
}
