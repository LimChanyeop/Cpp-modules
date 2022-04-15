#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	// const Animal* meta = new Animal();
	const Cat* j = new Cat();
	const Dog* i = new Dog();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	// meta->makeSound();
}