#include "Zombie.hpp"

int main(){
	Zombie *z = zombieHorde(3, "TEST");
	for (int i = 0; i < 3; i++){
		z[i].announce();
	}
	return 0;
}