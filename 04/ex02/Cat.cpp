#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor of Cat is called." << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const & other) : Animal(other)
{
	std::cout << "Copy constructor called" << std::endl;
    this->brain = new Brain();
    *(this) = other;
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat is called." << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(Cat const & other)
{
	std::cout << "Assignation operator called for Cat" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return (*this);
}

Animal &Cat::operator=(Animal const & other)
{
	std::cout << "Animal assignation operator called for Cat" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Making sound of a Cat: Meow !" << std::endl;
}

Brain *Cat::getBrain() const
{
    return this->brain;
}