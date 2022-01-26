#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Form *form = NULL;
	Form *form1 = NULL;
	Intern someRandomIntern;

	try
	{
		Bureaucrat bob("bob", 120);
		form = someRandomIntern.makeForm("shrubbery creation", "shrubbery");
		std::cout << *form << std::endl;
		bob.signForm(*form);
		std::cout << *form << std::endl;
		bob.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat joe("joe", 40);
		form = someRandomIntern.makeForm("robotomy request", "robotomy");
		std::cout << *form << std::endl;
		joe.signForm(*form);
		std::cout << *form << std::endl;
		joe.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat anna("anna", 2);
		form = someRandomIntern.makeForm("presidential pardon", "pardon");
		form1 = someRandomIntern.makeForm("presidential pardon", "pardon_f");
		std::cout << *form << std::endl;
		std::cout << *form1 << std::endl;
		anna.signForm(*form);
		std::cout << *form << std::endl;
		std::cout << *form1 << std::endl;
		anna.executeForm(*form);
		anna.executeForm(*form1);
		delete form;
		delete form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}