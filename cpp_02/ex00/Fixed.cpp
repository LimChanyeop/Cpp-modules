#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	m_iValue = 0;
};

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed& Fixed::operator=(const Fixed& ref){
	std::cout << "Assignation operator called" << std::endl;
	if (&ref == this)
		return *this;
	m_iValue = ref.getRawBits();
	return *this;                                                         
};

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (m_iValue);
};

void Fixed::setRawBits( int const raw ){
	m_iValue = raw << Fixed::m_fracBit;
};