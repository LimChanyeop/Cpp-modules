#include "Dog.hpp"

Dog::Dog(void){
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void){
	std::cout << "Dog Default Destructor Called" << std::endl;
}

Dog::Dog(const Dog &c) : Animal(c){
    std::cout << "Dog Copy Constructor Called" << std::endl;
    *this = c;
}

Dog	&Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Assignment Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string Dog::getType(void) const{
	return (this->type);
}

void	Dog::makeSound(void)const{
	std::cout << "woaf woaf!" << std::endl;
}