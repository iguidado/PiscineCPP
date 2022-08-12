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
			Fixed &	operator=( Fixed const &src);
			Fixed(int const src);
			Fixed(float src);
			Fixed(void);
			~Fixed(void);
		float	toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void) const;
		void	setRawBits(int const &raw);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &src);
