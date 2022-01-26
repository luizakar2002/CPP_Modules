# include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    std::cout << "Default constructor of FragTrap has been called" << std::endl;
	this->_name = "Anonymous";
	this->_hitp = 100;
	this->_energyp = 100;
	this->_attackd = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "Constructor of FragTrap has been called" << std::endl;
	this->_name = name;
	this->_hitp = 100;
	this->_energyp = 100;
	this->_attackd = 30;
}

FragTrap::FragTrap(FragTrap const & other): ClapTrap(other)
{
	std::cout << "Copy constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor of FragTrap has been called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = other._name;
	this->_hitp = other._hitp;
	this->_energyp = other._energyp;
	this->_attackd = other._attackd;
	return (*this);
}

void FragTrap::attack(std::string const & target)
{
	this->_energyp -= 2;
	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << "2 points of damage!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "Please, give me 5 high fives !!!" << std::endl;
}