#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap( void );
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & other);
		~DiamondTrap( void );

		DiamondTrap &operator=(DiamondTrap const & other);
		
		void attack(std::string target);
		void whoAmI( void );
};

# endif