#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>


class Weapon{
private:
	std::string type;
	
public:
	Weapon(std::string type_);
	~Weapon(){};

	void setType(const std::string &type_);
	const std::string getType() const;
};


#endif