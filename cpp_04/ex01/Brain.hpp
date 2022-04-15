#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	~Brain();
	Brain(Brain const &brain);
	Brain&		operator=(Brain const &brain);

	void 		setIdeas(std::string idea);
	std::string getIdea(unsigned int i);
};

#endif