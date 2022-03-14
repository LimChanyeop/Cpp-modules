#include "Zombie.hpp"

int main(){
	Zombie *z = newZombie("Test zombie");
	z->announce();
	return 0;
}