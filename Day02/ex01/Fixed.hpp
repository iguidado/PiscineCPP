#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			_raw;
		static int const	_bits = 8;
	public:
			Fixed(void);
			~Fixed(void);
			Fixed(Fixed const &origin);
			Fixed(int const src);
			Fixed(float src);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const &raw);


		Fixed &	operator=( Fixed const &src);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &src);
