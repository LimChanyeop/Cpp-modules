#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie(){
	std::cout << name << " Died" << std::endl;
};

Zombie::Zombie( std::string _name ){
	name = _name;
	std::cout << "Call Constructor" << std::endl;
};

Zombie::Zombie(){
	std::cout << "Call DEFAULT Constructor" << std::endl;
};

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName( std::string _name ){
	name = _name;
};