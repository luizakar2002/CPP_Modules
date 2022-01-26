#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), target("")
{
	std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "Standard constructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other)
{
	std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	std::cout << "Assignement operator for ShrubberyCreationForm called" << std::endl;
	return *this; 
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!(this->getIsSigned()) || executor.getGrade() > this->getExecGrade())
		throw Form::CantExecute();
	std::ofstream file(this->target + "_shrubbery");
	file << "    /\\" << std::endl;
	file << "   /**\\" << std::endl;
	file << "  /****\\" << std::endl;
	file << " /******\\" << std::endl;
	file << "/********\\" << std::endl;
	file << "   |__|    " << std::endl;
	file.close();
}