#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(const std::string& name_);
	~HumanB(){};
	void attack();
	void setWeapon(Weapon& weapon_);
	
};

#endif