#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "---- Wrong TEST ----" << std::endl << std::endl;
		WrongAnimal a;
		std::cout << "-----" << std::endl;
		WrongAnimal b(a);
		std::cout << "-----" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const WrongCat* j = new WrongCat();
		std::cout << i->getType() << std::endl;
		std::cout << j->getType() << std::endl;
		meta->makeSound();
		i->makeSound();//non-virtual function -> animal sound
		j->makeSound();
		delete meta;
		std::cout << "-----" << std::endl;
		delete i;
		std::cout << "-----" << std::endl;
		delete j;
		std::cout << "-----" << std::endl;
	}
	{
		std::cout << "---- Valid TEST ----" << std::endl << std::endl;
		Animal a;
		std::cout << "-----" << std::endl;
		Animal b(a);
		std::cout << "-----" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	return (1);
}
