#include "Weapon.hpp"
#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB(const std::string& name_){
	name = name_;
	weapon = NULL;	
};

void HumanB::attack(){
	if(weapon)
		std::cout << name << " attack with his " << weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon& weapon_){
	weapon =& (weapon_);
};