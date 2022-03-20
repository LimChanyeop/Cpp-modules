#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	m_iValue = 8;
};

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->m_iValue = (value << this->m_fracBit);
};

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->m_iValue = (int)std::roundf(value * (1 << this->m_fracBit));
};

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed& Fixed::operator=(const Fixed &ref){
	std::cout << "Assignation operator called" << std::endl;
	if (&ref == this)
		return *this;
	m_iValue = ref.getRawBits();
	return *this;                                                         
};

int Fixed::getRawBits( void ) const {

	return (m_iValue);
};

void Fixed::setRawBits( int const raw ){
	m_iValue = raw;
};

int Fixed::toInt(void) const{
	return (this->m_iValue >> this->m_fracBit);
};

float Fixed::toFloat(void) const{
	return ((float)this->m_iValue / (1 << this->m_fracBit));
};

std::ostream &operator<<( std::ostream &out, const Fixed &fixed ) {
	out << fixed.toFloat();
	return (out);
}