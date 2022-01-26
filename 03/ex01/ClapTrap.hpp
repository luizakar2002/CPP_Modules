#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitp;
		int _energyp;
		int _attackd;
	public:
		ClapTrap( void );
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & other);
		~ClapTrap( void );

		ClapTrap &operator=(ClapTrap const & other);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

# endif