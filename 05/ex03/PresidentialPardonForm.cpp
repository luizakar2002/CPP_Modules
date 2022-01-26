#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), target("")
{
	std::cout << "Default ctor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "Standard ctor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): Form(other)
{
	std::cout << "Copy ctor for PresidentialPardonForm called" << std::endl;
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "dtor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	std::cout << "Assignement operator for PresidentialPardonForm called" << std::endl;
	return *this; 
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!(this->getIsSigned()) || executor.getGrade() > this->getExecGrade())
		throw Form::CantExecute();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}