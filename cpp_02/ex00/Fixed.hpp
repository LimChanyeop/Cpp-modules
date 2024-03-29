#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
	int m_iValue;
	static const int m_fracBit = 8;
 
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed& ref);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
