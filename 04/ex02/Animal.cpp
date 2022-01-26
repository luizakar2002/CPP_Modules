# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor of Animal is called." << std::endl;
    this->type = "Animal";
}

Animal::Animal(Animal const & other)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal is called." << std::endl;
}

Animal &Animal::operator=(Animal const & other)
{
	std::cout << "Assignation operator called for Animal" << std::endl;
    this->type = other.getType();
    return (*this);
}

std::string Animal::getType() const
{
    return this->type;
}