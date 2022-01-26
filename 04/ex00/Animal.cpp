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
	std::cout << "Assignation operator called" << std::endl;
    this->type = other.getType();
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Making sound of an Animal !" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}