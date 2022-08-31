#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			_raw;
		static int const	_bits = 8;
		int			bitsMask(void) const;
	public:
			Fixed(Fixed const &origin);
			Fixed(int const src);
			Fixed(void);
			Fixed(float src);
			~Fixed(void);
		static Fixed 	&min(Fixed  &src, Fixed &that);
		static Fixed 	&max(Fixed &src, Fixed &that);
		static Fixed const	&min(Fixed const &src, Fixed const &that);
		static Fixed const	&max(Fixed const &src, Fixed const &that);
		float	toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const &raw);
		Fixed &	operator=( Fixed const &src);
		Fixed & operator++();
		float 	operator++(int incr);
		Fixed & operator--();
		float	operator--(int incr);
		bool 	operator>( Fixed const &src) const;
		bool 	operator<( Fixed const &src) const;
		bool 	operator<=( Fixed const &src) const;
		bool 	operator>=( Fixed const &src) const;
		bool 	operator==( Fixed const &src) const;
		bool 	operator!=( Fixed const &src) const;
		Fixed	operator+( Fixed const &src) const;
		Fixed	operator-( Fixed const &src) const;
		Fixed	operator/( Fixed const &src) const;
		Fixed	operator*( Fixed const &src) const;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &src);
