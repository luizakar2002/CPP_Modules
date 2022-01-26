#include <cmath>
#include "Fixed.hpp"

int		Fixed::ft_pow(const int val, const int power) const
{
	int		i = 0;
	int		result;

	result = 1;
	while (i < power)
	{
		result *= val;
		i++;
	}
	return (result);
}

Fixed::Fixed( void ): _fpv(0)
{
	if (Fixed::_verbose)
		std::cout << "Default Ctor called" << std::endl;
	return;
}

Fixed::Fixed( const int value )
{
	if (Fixed::_verbose)
		std::cout << "Constant integer Ctor called" << std::endl;
	this->_fpv = value << this->_n_of_frbits;
	return;
}

Fixed::Fixed( const float value )
{
	int power = ft_pow(2, this->_n_of_frbits);

	if (Fixed::_verbose)
		std::cout << "Constant float Ctor called" << std::endl;
	this->_fpv = roundf(value * power);
	return;
}

Fixed::Fixed( Fixed const & src )
{
	if (Fixed::_verbose)
		std::cout << "Copy Ctor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void )
{
	if (Fixed::_verbose)
		std::cout << "Dtor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	if (Fixed::_verbose)
		std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fpv = rhs._fpv;
	return *this;
}

bool	Fixed::operator>( const Fixed &rhs ) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( const Fixed &rhs ) const
{
	return (rhs > *this);
}

bool	Fixed::operator>=( const Fixed &rhs ) const
{
	return (!(*this < rhs));
}

bool	Fixed::operator<=( const Fixed &rhs ) const
{
	return (!(*this > rhs));
}

bool	Fixed::operator==( const Fixed &rhs ) const
{
	return (rhs.getRawBits() == this->getRawBits());
}

bool	Fixed::operator!=( const Fixed &rhs ) const
{
	return (!(rhs == *this));
}

Fixed	Fixed::operator+( const Fixed &rhs ) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-( const Fixed &rhs ) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*( const Fixed &rhs ) const
{
	Fixed	result(this->toFloat() * rhs.toFloat());

	return (result);
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());

	return (result);
}

Fixed	&Fixed::operator++( void )
{
	this->_fpv++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--( void )
{
	this->_fpv--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

int	Fixed::toInt( void ) const
{
	return (this->_fpv >> this->_n_of_frbits);
}

float	Fixed::toFloat( void ) const
{
	int		power = ft_pow(2, this->_n_of_frbits);
	float	result = (float)this->_fpv / power;

	return (result);
}

int	Fixed::getRawBits( void ) const
{
	return (this->_fpv);
}

void	Fixed::setRawBits( const int raw )
{
	this->_fpv = raw;
}

void	Fixed::setVerbose( bool value )
{
	Fixed::_verbose = value;
}

bool	Fixed::getVerbose( void )
{
	return (Fixed::_verbose);
}

Fixed		&Fixed::min( Fixed &lhs, Fixed &rhs )
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed		&Fixed::min( const Fixed &lhs, const Fixed &rhs )
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed		&Fixed::max( Fixed &lhs, Fixed &rhs )
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed		&Fixed::max( const Fixed &lhs, const Fixed &rhs )
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

bool	Fixed::_verbose = false;

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}
