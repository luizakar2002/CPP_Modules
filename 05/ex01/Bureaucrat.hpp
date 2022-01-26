#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(const std::string &name, int gr);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &other);

		std::string const &getName() const;
		int getGrade() const;
		void increase(int quantity);
		void decrease(int quantity);
		void signForm(Form &form) const;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade too high!";
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade too low!";
				}			
		};
};

std::ostream	&operator<<(std::ostream &ostr, Bureaucrat const &other);

#endif