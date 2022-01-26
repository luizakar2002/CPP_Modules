#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap clap("1st_ClapTrap");
	ScavTrap scav("1st_ScavTrap");

	clap.attack("target");
	clap.takeDamage(2);
	clap.beRepaired(3);

	scav.guardGate();
	scav.attack("target");
	scav.takeDamage(2);
	scav.beRepaired(3);

	return (0);
}