#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor of Brain is called." << std::endl;
}

Brain::Brain(Brain const & other)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain()
{
    std::cout << "Destructor of Brain is called." << std::endl;
}

Brain &Brain::operator=(Brain const & other)
{
    int i;

	std::cout << "Assignation operator called for Brain" << std::endl;
    i = -1;
    while (++i < 100)
        this->ideas[i] = other.ideas[i];
    return (*this);
}