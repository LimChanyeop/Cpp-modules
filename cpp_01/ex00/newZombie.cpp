#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie* _Zombie = new Zombie(name);
	return (_Zombie);
};