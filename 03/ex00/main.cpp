#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap("1st_ClapTrap");

	clap.attack("target");
	clap.takeDamage(2);
	clap.beRepaired(3);
	return (0);
}