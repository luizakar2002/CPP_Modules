#include "Form.hpp"

Form::Form(const std::string &n, int s_gr, int e_gr): name(n), is_signed(false), sign_grade(s_gr), exec_grade(e_gr)
{
	std::cout << "Form ctor called." << std::endl;
	if (s_gr < 1 || e_gr < 1)
		throw Form::GradeTooHighException();
	if (s_gr > 150 || e_gr > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other): name(other.getName()), is_signed(other.getIsSigned()),
		sign_grade(other.getSignGrade()), exec_grade(other.getExecGrade())
{
	std::cout << "Copy ctor for Form called" << std::endl;
	*this = other;
}

Form::~Form()
{
	std::cout << "Form dtor called." << std::endl;
}

Form &	Form::operator=(Form const &other)
{
	std::cout << "Assignement operator for Form called" << std::endl;
	this->is_signed = other.is_signed;
	std::cout << "Const members can't be copied" << std::endl;
	return *this;
}

std::string const &Form::getName() const
{
	return this->name;
}

int const Form::getSignGrade() const
{
	return this->sign_grade;
}

int const Form::getExecGrade() const
{
	return this->exec_grade;
}

bool Form::getIsSigned() const
{
	return this->is_signed;
}

void Form::beSigned(const Bureaucrat *b)
{
	if (b->getGrade() > this->sign_grade)
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

std::ostream	&operator<<(std::ostream &ostr, Form const &other)
{
	ostr << other.getName() << " Form has to be signed by a "
		<< other.getSignGrade() << " grade and executed by a "
		<< other.getExecGrade() << " grade, it is "
		<< ((other.getIsSigned()) ? "" : "not ") << "signed";
	return ostr;
}