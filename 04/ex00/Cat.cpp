#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor of Cat is called." << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & other)
{
	std::cout << "Copy constructor called" << std::endl;
    *(this) = other;
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat is called." << std::endl;
}

Cat &Cat::operator=(Cat const & other)
{
	std::cout << "Assignation operator called" << std::endl;
    this->type = other.getType();
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Making sound of a Cat: Meow !" << std::endl;
}