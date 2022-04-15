#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Default Destructor" << std::endl;   
}

Brain::Brain(const Brain &brain){
	std::cout << "Brain Copy constructor called" << std::endl;
    *this = brain;
}

Brain &	Brain::operator=(Brain const& brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

void        Brain::setIdeas(std::string idea){
	for(int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

std::string	    Brain::getIdea(unsigned int i){
	return(this->ideas[i]);
}