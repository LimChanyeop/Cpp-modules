#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(){
	m_iValue = 0;
};

Fixed::Fixed(const int value){
	this->m_iValue = (value << this->m_fracBit);
};

Fixed::Fixed(const float value){
	this->m_iValue = (int)std::roundf(value * (1 << this->m_fracBit));
};

Fixed::~Fixed(){
};

Fixed::Fixed(const Fixed& fixed){
	*this = fixed;
};

Fixed& Fixed::operator=(const Fixed &ref){
	if (&ref == this)
		return *this;
	m_iValue = ref.getRawBits();
	return *this;                                                         
};

int Fixed::getRawBits( void ) const {
	return (m_iValue);
};

void Fixed::setRawBits( int const raw ){
	m_iValue = raw << m_fracBit;
};

int Fixed::toInt(void) const{
	return (this->m_iValue >> this->m_fracBit);
};

float Fixed::toFloat(void) const{
	return ((float)this->m_iValue / (1 << this->m_fracBit));
};

Fixed Fixed::operator+(const Fixed &ref){
	Fixed fixed;
	fixed.m_iValue = this->m_iValue + ref.m_iValue;
	return (*this);
};

Fixed Fixed::operator-(const Fixed &ref){
	Fixed fixed;
	fixed.m_iValue = this->m_iValue - ref.m_iValue;
	return (fixed);
};

Fixed Fixed::operator*(const Fixed &ref){
	Fixed fixed;
	fixed.m_iValue = ((this->m_iValue * ref.m_iValue) >> this->m_fracBit);
	return (fixed);
};

Fixed Fixed::operator/(const Fixed &ref){
	Fixed fixed;
	fixed.m_iValue = ((this->m_iValue / ref.m_iValue) >> this->m_fracBit);
	return (fixed);
};

Fixed& Fixed::operator++(void){
	this->m_iValue++;
	return (*this);
};

Fixed Fixed::operator++(int){
	Fixed fixed;
	fixed = *this;
	this->m_iValue++;
	return (fixed);
};

Fixed& Fixed::operator--(void){
	this->m_iValue--;
	return (*this);
};

Fixed Fixed::operator--(int){
	Fixed fixed;
	fixed = *this;
	this->m_iValue--;
	return (fixed);
};

bool Fixed::operator>(const Fixed &ref){
	return (m_iValue > ref.getRawBits());
};

bool Fixed::operator<(const Fixed &ref){
	return (m_iValue < ref.getRawBits());
};

bool Fixed::operator>=(const Fixed &ref){
	return (m_iValue >= ref.getRawBits());
};

bool Fixed::operator<=(const Fixed &ref){
	return (m_iValue <= ref.getRawBits());
};

bool Fixed::operator==(const Fixed &ref){
	return (m_iValue == ref.getRawBits());
};

bool Fixed::operator!=(const Fixed &ref){
	return (m_iValue != ref.getRawBits());
};

const Fixed& Fixed::max(const Fixed& ref1, const Fixed& ref2){
	if (ref1.m_iValue > ref2.m_iValue)
		return (ref1);
	else
		return (ref2);
};

const Fixed& Fixed::min(const Fixed& ref1, const Fixed& ref2){
	if (ref1.m_iValue < ref2.m_iValue)
		return (ref1);
	else
		return (ref2);
};

std::ostream &operator<<( std::ostream &out, const Fixed &fixed ) {
	out << fixed.toFloat();
	return (out);
}

