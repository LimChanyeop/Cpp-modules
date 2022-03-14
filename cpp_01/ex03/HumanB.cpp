#include "Weapon.hpp"
#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB(std::string name_){
	name = name_;
	
};

void HumanB::attack(){
	std::cout << name << " attack with his " << weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon& weapon_){
	weapon = &(weapon_);
};