#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap diamond("New_DiamondTrap");

	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.attack("target");
	diamond.takeDamage(2);
	diamond.beRepaired(3);
	diamond.whoAmI();

	return (0);
}