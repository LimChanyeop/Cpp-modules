#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), name("")
{
	ClapTrap::name += "_clap_name";
	this->hitPoints = DIAMOND_HIT_POINTS;
	this->energyPoints = DIAMOND_ENERGY_POINTS;
	this->attackDamage = DIAMOND_ATTACK_DAMAGE;
	std::cout << "Default DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), name(name)
{
	ClapTrap::name += "_clap_name";
	this->hitPoints = FRAG_HIT_POINTS;
	this->energyPoints = DIAMOND_ENERGY_POINTS;
	this->attackDamage = FRAG_ATTACK_DAMAGE;
	std::cout << "DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap)
{
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	this->name = diamondTrap.getName();
	ClapTrap::name = diamondTrap.ClapTrap::getName();
	this->hitPoints = diamondTrap.getHitPoints();
	this->energyPoints = diamondTrap.getEnergyPoints();
	this->attackDamage = diamondTrap.getAttackDamage();
	return (*this);
}

std::string	DiamondTrap::getName() const
{
	return this->name;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
    {
        std::cout << "DiamondTrap " << this->name << " is died." << std::endl;
        return;
    }
    if (this->energyPoints <= 0)
    {
        std::cout << "DiamondTrap " << this->name << " is died." << std::endl;
        return;
    }
    if (amount > this->hitPoints)
    {
        this->hitPoints = 0;
        std::cout << "DiamondTrap " << this->name << " is died." << std::endl;
        return;
    }
    this->hitPoints -= amount;
    std::cout << "DiamondTrap " << this->name << " take " << amount << " damage." << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
    {
        std::cout << "DiamondTrap " << this->name << " is died." << std::endl;
        return;
    }
    if (this->energyPoints <= 0)
    {
        std::cout << "DiamondTrap " << this->name << " is out of energy." << std::endl;
        return;
    }
    if (this->hitPoints + amount > DIAMOND_HIT_POINTS)
    {
        this->hitPoints = DIAMOND_HIT_POINTS;
        std::cout << "DiamondTrap " << this->name << " is repaired." << std::endl;
        return;
    }
    this->hitPoints += amount;
    this->energyPoints -= ENERGY_COST;
    std::cout << "DiamondTrap " << this->name << " is repaired." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}