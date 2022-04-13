#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int m_iValue;
	static const int m_fracBit = 8;
 
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixed);
	~Fixed(void);

	// static Fixed& min(Fixed& ref1, Fixed& ref2 );
	// static Fixed& max(Fixed& ref1, Fixed& ref2 );
	static const Fixed& min(const Fixed& ref1, const Fixed& ref2 );
	static const Fixed& max(const Fixed& ref1, const Fixed& ref2 );

	Fixed& operator=(const Fixed& ref);

	Fixed operator+(const Fixed& ref);
	Fixed operator-(const Fixed& ref);
	Fixed operator*(const Fixed& ref);
	Fixed operator/(const Fixed& ref);
	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	bool operator>(const Fixed& ref);
	bool operator<(const Fixed& ref);
	bool operator>=(const Fixed& ref);
	bool operator<=(const Fixed& ref);
	bool operator==(const Fixed& ref);
	bool operator!=(const Fixed& ref);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	void setRawBits( float const raw );
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif
