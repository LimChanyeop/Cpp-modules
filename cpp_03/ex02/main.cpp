#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;
	b.guardGate();

	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
	return (0);
}