#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie(){
	std::cout << name << " Died" << std::endl;
};

Zombie::Zombie( std::string _name ){
	name = _name;
};

void Zombie::announce(void){
	std::cout << "<" << name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
};
