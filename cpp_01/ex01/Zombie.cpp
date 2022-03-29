#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie(){
	std::cout << name << " Died" << std::endl;
};

Zombie::Zombie( std::string _name ){
	name = _name;
};

Zombie::Zombie(){
};

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName( std::string _name ){
	name = _name;
};