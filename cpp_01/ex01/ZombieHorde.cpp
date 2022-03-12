#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie*	z_list = new Zombie[N];

	for (int i = 0; i < N; i++){
		z_list[i].setName(name);
	}
	return (z_list);
}
