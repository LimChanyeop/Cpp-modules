#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = FRAG_HIT_POINTS;
	energyPoints = FRAG_ENERGY_POINTS;
	attackDamage = FRAG_ATTACK_DAMAGE;
	std::cout << "Default FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = FRAG_HIT_POINTS;
	energyPoints = FRAG_ENERGY_POINTS;
	attackDamage = FRAG_ATTACK_DAMAGE;
	std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& fragTrap)
{
	name = fragTrap.getName();
	hitPoints = fragTrap.getHitPoints();
	energyPoints = fragTrap.getEnergyPoints();
	attackDamage = fragTrap.getAttackDamage();
	return (*this);
}

void	FragTrap::attack(std::string const& target)
{
	if (hitPoints <= 0)
	{
		std::cout << "FragTrap " << name << " is died." << std::endl;
		return;
	}
    if (energyPoints <= 0)
    {
        std::cout << "FragTrap " << name << " is out of energy." << std::endl;
        return;
    }
    this->energyPoints -= ENERGY_COST;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " of damage!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    if (hitPoints <= 0)
    {
        std::cout << "FragTrap " << name << " is died." << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " high fives guys." << std::endl;
}