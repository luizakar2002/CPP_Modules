#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default ctor of DiamondTrap is called" << std::endl;
	this->_name = "Anonymous";
	this->_hitp = FragTrap::_hitp;
	this->_energyp = ScavTrap::_energyp;
	this->_attackd = FragTrap::_attackd;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Ctor of DiamondTrap is called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitp = FragTrap::_hitp;
	this->_energyp = ScavTrap::_energyp;
	this->_attackd = FragTrap::_attackd;
}

DiamondTrap::DiamondTrap(DiamondTrap const & other): ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "Copy ctor of DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Dtor of DiamondTrap has been called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = other._name;
	this->_hitp = other._hitp;
	this->_energyp = other._energyp;
	this->_attackd = other._attackd;
	return (*this);
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->_name;
	std::cout << " and my ClapTrap's name is " << ClapTrap::_name << ".";
	std::cout << std::endl;
}