#include "Dog.hpp"

Dog::Dog(void){
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	this->setBrain("Dog's brain");
}

Dog::~Dog(void){
	std::cout << "Dog Default Destructor Called" << std::endl;
	if (this->brain)
		delete this->brain;
}

Dog::Dog(const Dog &dog) : Animal(dog){
    std::cout << "Dog Copy Constructor Called" << std::endl;
	this->brain = NULL;
    *this = dog;
}

Dog	&Dog::operator=(const Dog &dog)
{
    std::cout << "Dog Operator Called" << std::endl;
	if(this == &dog)
		return (*this);
	this->type = dog.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	*this->brain = *(dog.brain);
	return (*this);
}

Brain	*Dog::getBrain(void) const {
	return (this->brain);
}

void	Dog::setBrain(std:: string idea){
	brain->setIdeas(idea);
}

std::string Dog::getType(void) const {
	return (this->type);
}

void	Dog::makeSound(void) const {
	std::cout << "woaf woaf" << std::endl;
}