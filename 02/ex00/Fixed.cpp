#include "Fixed.hpp"

Fixed::Fixed( void ): _fpv( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	
	return;
}

Fixed::Fixed(Fixed const & f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fpv = f.getRawBits();

	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed &	Fixed::operator=( Fixed const & f)
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &f )
		this->_fpv = f.getRawBits();

	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_fpv);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpv = raw;
}