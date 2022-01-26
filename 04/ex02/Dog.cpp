#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor of Dog is called." << std::endl;
	this->type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog const & other) : Animal(other)
{
	std::cout << "Copy constructor called" << std::endl;
    this->brain = new Brain();
    *(this) = other;
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog is called." << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(Dog const & other)
{
	std::cout << "Assignation operator called for Dog" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return (*this);
}

Animal &Dog::operator=(Animal const & other)
{
	std::cout << "Animal assignation operator called for Dog" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return (*this);
}


void Dog::makeSound() const
{
    std::cout << "Making sound of a Dog: Haf !" << std::endl;
}

Brain *Dog::getBrain() const
{
    return this->brain;
}