#pragma once
#include <iostream>

class Fixed
{
	private:
		int			_raw;
		static int const	_bits = 8;
	public:
			Fixed(Fixed const &origin);
		Fixed &	operator=(Fixed const &src);
			Fixed(void);
			~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const &raw);
};
