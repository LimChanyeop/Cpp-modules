#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define SCAV_HIT_POINTS 100
# define SCAV_ENERGY_POINTS 50
# define SCAV_ATTACK_DAMAGE 20

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scavTrap);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap& scavTrap);
	void		attack(std::string const&  target);
	void		guardGate();
};

#endif