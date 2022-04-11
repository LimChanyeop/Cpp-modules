#include "ClapTrap.hpp"
# include <iostream>

ClapTrap::ClapTrap() : name(""), hitPoints(HIT_POINTS), energyPoints(ENERGY_POINTS), attackDamage(ATTACK_DAMAGE)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(HIT_POINTS), energyPoints(ENERGY_POINTS), attackDamage(ATTACK_DAMAGE)
{
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	*this = clapTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clapTrap)
{
	this->name = clapTrap.getName();
	this->hitPoints = clapTrap.getHitPoints();
	this->energyPoints = clapTrap.getEnergyPoints();
	this->attackDamage = clapTrap.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return this->name;
}

unsigned int	ClapTrap::getHitPoints() const
{
	return this->hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void	ClapTrap::attack(std::string const& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is died." << std::endl;
		return;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy." << std::endl;
		return;
	}
	energyPoints -= ENERGY_COST;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " is died." << std::endl;
		return;
	}
	if (amount > this->hitPoints)
	{
		this->hitPoints = 0;
		std::cout << this->name << " is died." << std::endl;
		return;
	}
	this->hitPoints -= amount;
	std::cout << this->name << " takes " << amount << " points of damage.  Remaining HitPoint is ";
	if (hitPoints <= amount)
	{
		hitPoints = 0;
		std::cout << "0. " << name << " is died." << std:: endl;
	}
	else
	{
		hitPoints -= amount;
		std::cout << hitPoints << "." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " is out of energy." << std::endl;
		return;
	}
	if (this->hitPoints <= 0)
		std::cout << name << " is died." << std:: endl;
	else
		std::cout << name << " is repaired.";
	this->hitPoints += amount;
	this->energyPoints -= ENERGY_COST;
	std::cout << "Recovers " << amount << " points, Remaining HitPoint is " << this->hitPoints << "." << std::endl;
}
