#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie(){
	std::cout << name << " Died" << std::endl;
};

Zombie::Zombie( std::string _name ){
	name = _name;
};

void Zombie::announce(void){
<<<<<<< HEAD
	std::cout << name << ": "<< "BraiiiiiiinnnzzzZ..." << std::endl;
=======
	std::cout <<  name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
>>>>>>> e54ee127b4f66e872c770e85019ea64c48b040e1
};
