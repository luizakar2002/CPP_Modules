#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap(std::string name);
        FragTrap(FragTrap const & other);
        ~FragTrap( void );

        FragTrap &operator=(FragTrap const & other);
        
        void attack(std::string const & target);
        void highFivesGuys(void);
};

# endif