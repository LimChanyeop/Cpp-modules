#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat(void);
	~Cat(void);
	Cat(const Cat &cat);
	Cat			&operator=(const Cat &cat);

	std::string getType(void) const;
	Brain* 		getBrain( void );
	void 		setBrain(std::string str);		
	void		makeSound(void) const;
};

#endif