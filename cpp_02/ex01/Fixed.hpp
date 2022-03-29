#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int m_iValue;
	static const int m_fracBit = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed &ref);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<( std::ostream &out, const Fixed &fixed );

#endif