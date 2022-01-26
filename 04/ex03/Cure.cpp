#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(Cure const & other): AMateria("cure")
{
	*this = other;
}

Cure &Cure::operator=(Cure const & other)
{
	this->type = other.type;
	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}