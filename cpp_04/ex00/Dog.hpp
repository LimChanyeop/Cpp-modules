#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	~Dog(void);
	Dog(const Dog&);
	Dog&		operator=(const Dog &obj);

	std::string getType(void) const;
	void		makeSound(void) const;
};

#endif