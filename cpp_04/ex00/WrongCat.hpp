#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(std::string);
	WrongCat(const WrongCat &);
	WrongCat	&operator=(const WrongCat &obj);

	std::string getType(void) const;
	void	makeSound(void)const;
};

#endif
