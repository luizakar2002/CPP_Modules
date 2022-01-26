#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & other);
		~Ice() {};

		Ice &operator=(Ice const & other);
		
		AMateria *clone() const;
		virtual void use(ICharacter & target);
};

#endif