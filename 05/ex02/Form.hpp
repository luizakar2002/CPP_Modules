#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool is_signed;
		const int sign_grade;
		const int exec_grade;
	public:
		Form(const std::string &n, int s_gr, int e_gr);
		Form(Form const &other);
		virtual ~Form();

		Form &operator=(Form const &other);

		std::string const &getName() const;
		bool getIsSigned() const;
		int const getSignGrade() const;
		int const getExecGrade() const;
		void beSigned(const Bureaucrat *b);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade too high!";
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade too low!";
				}			
		};

		class CantExecute: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Can't execute this form!";
				}
		};
};

std::ostream &operator<<(std::ostream &ostr, Form const &other);

#endif