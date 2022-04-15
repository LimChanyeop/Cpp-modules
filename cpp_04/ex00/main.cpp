#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Cat c;
	std::cout<<"----"<<std::endl;
	Cat c1(c);

	// {
	// 	std::cout << "--- WRONG TEST---" << std::endl << std::endl;
	// 	WrongAnimal a;
	// 	WrongAnimal b(a);
	// 	const WrongAnimal* meta = new WrongAnimal();
	// 	const WrongAnimal* i = new WrongCat();
	// 	const WrongCat* j = new WrongCat();
	// 	std::cout << i->getType() << " " << std::endl;
	// 	std::cout << j->getType() << " " << std::endl;
	// 	i->makeSound();
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	delete meta;
	// 	delete i;
	// 	delete j;
	// }
	// {
	// 	std::cout << "--- VaLid TEST---" << std::endl << std::endl;
	// 	Animal a;
	// 	Animal b(a);
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	i->makeSound();
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	// delete meta;
	// 	// delete i;
	// 	// delete j;
	// }
	// return (1);
}
