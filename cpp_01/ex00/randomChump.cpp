#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie z = Zombie(name);
	z.announce();
	Zombie* z_alloc = newZombie(name);
	z_alloc->announce();
}