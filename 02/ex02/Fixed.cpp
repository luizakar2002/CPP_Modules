#include "Fixed.hpp"

Fixed::Fixed( void ): _fpv( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	this->_fpv = 0;
}

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpv = (_fpv << Fixed::_n_of_frbits);
}

Fixed::Fixed( const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fpv = roundf(_fpv * (1 << Fixed::_n_of_frbits));
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

std::ostream &operator<<(std::ostream & out, Fixed const & value)
{
	out << value.toFloat();
	return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fpv / (float)(1 << Fixed::_n_of_frbits));
}

int Fixed::toInt(void) const
{
	return (this->_fpv >> Fixed::_n_of_frbits);
}