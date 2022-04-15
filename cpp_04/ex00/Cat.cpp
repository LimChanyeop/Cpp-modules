#include "Cat.hpp"

Cat::Cat(void){
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void){
	std::cout << "Cat Default Destructor Called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = c;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat Assignment Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string Cat::getType(void) const{
	return (this->type);
}

void	Cat::makeSound(void) const{
	std::cout << "meaw meaw!" << std::endl;
}
