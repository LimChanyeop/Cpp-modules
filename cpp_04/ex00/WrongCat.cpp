#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	std::cout << "Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "Default Destructor Called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){
	std::cout << "Parameterized Constructor Called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &c) : WrongAnimal(c){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = c;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string WrongCat::getType(void) const{
	return (this->type);
}

void	WrongCat::makeSound()const{
	std::cout << "meaw meaw" << std::endl;
}