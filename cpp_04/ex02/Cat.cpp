#include "Cat.hpp"

Cat::Cat(void){
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	this->setBrain("Cat's brain");
}

Cat::~Cat(void){
	std::cout << "Cat Default Destructor Called" << std::endl;
	if (this->brain)
		delete this->brain;
}

Cat::Cat(const Cat &c) : Animal(c){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->brain = NULL;
	*this = c;
}

Cat& Cat::operator=(const Cat &cat)//deep copy
{
	std::cout << "Cat Operator Called" << std::endl;
	if(this == &cat)
		return (*this);
	this->type = cat.type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain();
	*this->brain = *(cat.brain);
	return (*this);
}

Brain	*Cat::getBrain(void) const {
	return (this->brain);
}

void	Cat::setBrain(std:: string idea){
	brain->setIdeas(idea);
}

std::string Cat::getType(void) const {
	return (this->type);
}

void	Cat::makeSound(void) const {
	std::cout << "meaw meaw" << std::endl;
}