#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
	
public:
	Animal();
	~Animal();
	Animal(const Animal& animal);
	Animal&			operator=(const Animal &obj);
	
	std::string		getType(void) const;
	virtual void	makeSound() const;
};

#endif
