#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat Default Destructor Called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){
	std::cout << "WrongCat Parameterized Constructor Called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &c) : WrongAnimal(c){
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = c;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string WrongCat::getType(void) const{
	return (this->type);
}

void	WrongCat::makeSound()const{
	std::cout << "meaw meaw" << std::endl;
}