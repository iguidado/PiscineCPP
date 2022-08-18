#pragma once
#include <iostream>

class Fixed
{
	private:
		int			_raw;
		static int const	_bits = 8;
	public:
			Fixed(void);
			~Fixed(void);
			Fixed(Fixed const &origin);
		Fixed &	operator=(Fixed const &src);
		int	getRawBits(void) const;
		void	setRawBits(int const &raw);
};
