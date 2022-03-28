#include "Zombie.hpp"

int main(){
	Zombie *z = newZombie("Test zombie");
	z->announce();
	randomChump("random");
	delete(z);
	return 0;
}