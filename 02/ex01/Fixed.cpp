#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default Ctor called" << std::endl;
	this->_fpv = 0;
}

Fixed::Fixed( int const n )
{
	std::cout << "Int Ctor called" << std::endl;
	this->_fpv = (n << Fixed::_n_of_frbits);
}

Fixed::Fixed( float const n)
{
	std::cout << "Float Ctor called" << std::endl;
	this->_fpv = roundf(n * (1 << Fixed::_n_of_frbits));
}

Fixed::Fixed(Fixed const & f)
{
	std::cout << "Copy Ctor called" << std::endl;
	this->_fpv = f.getRawBits();
}

Fixed::~Fixed( void )
{
	std::cout << "Dtor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpv = f.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream & out, Fixed const & value)
{
	out << value.toFloat();
	return (out);
}

int Fixed::getRawBits( void ) const
{
	return (this->_fpv);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpv = raw;
}


float Fixed::toFloat(void) const
{
	return ((float)this->_fpv / (float)(1 << Fixed::_n_of_frbits));
}

int Fixed::toInt(void) const
{
	return (this->_fpv >> Fixed::_n_of_frbits);
}