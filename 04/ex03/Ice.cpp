#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const & other): AMateria("ice")
{
	*this = other;
}

Ice &Ice::operator=(Ice const & other)
{
	this->type = other.type;
	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}