#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    std::cout << "Default constructor of ScavTrap has been called" << std::endl;
	this->_name = "Anonymous";
	this->_hitp = 100;
	this->_energyp = 50;
	this->_attackd = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "Constructor of ScavTrap has been called" << std::endl;
	this->_name = name;
	this->_hitp = 100;
	this->_energyp = 50;
	this->_attackd = 20;
}

ScavTrap::ScavTrap(ScavTrap const & other): ClapTrap(other)
{
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor of ScavTrap has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = other._name;
	this->_hitp = other._hitp;
	this->_energyp = other._energyp;
	this->_attackd = other._attackd;
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	this->_energyp -= 2;
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << "2 points of damage!" << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}