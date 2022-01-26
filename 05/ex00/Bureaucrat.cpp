#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int gr): name(name), grade(gr)
{
	std::cout << "Bureaucrat ctor called." << std::endl;
	if (gr < 1)
		throw Bureaucrat::GradeTooHighException();
	if (gr > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat dtor called." << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &other)
{
	std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	this->grade = other.grade;
	std::cout << "Name is const so can't be copied" << std::endl;
	return *this;
}

std::string const &Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::increase(int quantity)
{
	this->grade -= quantity;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrease(int quantity)
{
	this->grade += quantity;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &other)
{
	ostr << other.getName() << ", Bureaucrat grade " << other.getGrade();
	return ostr;
}