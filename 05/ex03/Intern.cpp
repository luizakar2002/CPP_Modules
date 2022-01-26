#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default ctor for Intern called" << std::endl;
}

Intern::Intern(Intern const &other)
{
	std::cout << "Copy ctor for Intern called" << std::endl;
	*this = other;
}

Intern::~Intern()
{
	std::cout << "Intern dtor called" << std::endl;
}

Intern &Intern::operator=(Intern const &other)
{
	std::cout << "Assignement operator for Intern called" << std::endl;
	return *this;
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	Form *f = NULL;
	t_list forms[] = 
	{
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i].name == formName)
			f = forms[i].form;
		else
			delete forms[i].form;
	}
	if (f == NULL)
		std::cout << "Intern did not find the form " << formName << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return f;
}