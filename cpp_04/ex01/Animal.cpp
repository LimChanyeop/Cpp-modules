#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default Constructor Called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal(){
	std::cout << "Animal Default Destructor Called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = animal;
}

Animal	&Animal::operator=(const Animal &obj)
{
	std::cout << "Animal Assignment Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string Animal::getType(void) const{
	return (this->type);
}

void	Animal::makeSound(void) const{
	std::cout << "Animal sound" << std::endl;
}