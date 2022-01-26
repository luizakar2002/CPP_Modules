#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Form *form = NULL;
	Form *form1 = NULL;
	try
	{
		Bureaucrat bob("bob", 120);
		form = new ShrubberyCreationForm("shrubbery");
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
		form = new RobotomyRequestForm("robotomy");
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
		form = new PresidentialPardonForm("pardon");
		form1 = new PresidentialPardonForm("pardon_f");
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