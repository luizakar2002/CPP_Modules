#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap clap("1st_ClapTrap");
	FragTrap frag("1st_FragTrap");

	clap.attack("target");
	clap.takeDamage(2);
	clap.beRepaired(3);

	frag.highFivesGuys();
	frag.attack("target");
	frag.takeDamage(2);
	frag.beRepaired(3);

	return (0);
}