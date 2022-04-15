#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal Parameterized Constructor Called" << std::endl;
	this->type = type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const{
	return (this->type);
}

void	WrongAnimal::makeSound(void)const{
	std::cout << "WrongAnimal sound" << std::endl;
}