#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor of ClapTrap has been called" << std::endl;
	this->_name = "Anonymous";
	this->_hitp = 10;
	this->_energyp = 10;
	this->_attackd = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor of ClapTrap has been called" << std::endl;
	this->_name = name;
	this->_hitp = 10;
	this->_energyp = 10;
	this->_attackd = 0;
}

ClapTrap::ClapTrap(ClapTrap const & other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hitp = other._hitp;
	this->_energyp = other._energyp;
	this->_attackd = other._attackd;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = other._name;
	this->_hitp = other._hitp;
	this->_energyp = other._energyp;
	this->_attackd = other._attackd;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	this->_energyp -= 2;
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << "2 points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_attackd += amount;
	std::cout << "ClapTrap " << this->_name << " is taking " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyp += amount;
	std::cout << "ClapTrap " << this->_name << " is being repaired by adding " << amount << " points!" << std::endl;
}