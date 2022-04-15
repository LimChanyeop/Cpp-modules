#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
    std::cout << "Copy Constructor Called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Parameterized Constructor Called" << std::endl;
	this->type = type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const{
	return (this->type);
}

void	WrongAnimal::makeSound(void)const{
	std::cout << "WrongAnimal sound" << std::endl;
}