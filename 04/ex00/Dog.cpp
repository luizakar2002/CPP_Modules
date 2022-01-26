#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor of Dog is called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & other)
{
	std::cout << "Copy constructor called" << std::endl;
    *(this) = other;
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog is called." << std::endl;
}

Dog &Dog::operator=(Dog const & other)
{
	std::cout << "Assignation operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Making sound of a Dog: Woof !" << std::endl;
}