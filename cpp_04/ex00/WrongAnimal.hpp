#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
	
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal	&operator=(const WrongAnimal &obj);

	std::string	getType(void) const;
	void	makeSound(void)const;
};

#endif
