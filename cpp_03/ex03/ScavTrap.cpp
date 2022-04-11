#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = SCAV_HIT_POINTS;
	energyPoints = SCAV_ENERGY_POINTS;
	attackDamage = SCAV_ATTACK_DAMAGE;
	std::cout << "Default ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = SCAV_HIT_POINTS;
	energyPoints = SCAV_ENERGY_POINTS;
	attackDamage = SCAV_ATTACK_DAMAGE;
	std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
	*this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavTrap)
{
	name = scavTrap.getName();
	hitPoints = scavTrap.getHitPoints();
	energyPoints = scavTrap.getEnergyPoints();
	attackDamage = scavTrap.getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is died." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is died." << std::endl;
		return;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is out of energy." << std::endl;
		return;
	}
	energyPoints -= ENERGY_COST;
	std::cout << "ScavTrap " << name << " guards the gate." << std::endl;
}