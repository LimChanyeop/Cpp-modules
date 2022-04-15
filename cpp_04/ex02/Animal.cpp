#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Destructor Called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = animal;
}

Animal	&Animal::operator=(const Animal &animal)
{
	std::cout << "Operator Called" << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string Animal::getType(void) const{
	return (this->type);
}