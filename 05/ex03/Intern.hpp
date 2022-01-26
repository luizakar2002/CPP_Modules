#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &other);
		~Intern();

		Intern &operator=(Intern const &other);

		Form	*makeForm(const std::string &formName, const std::string &target) const;
		typedef struct s_list
		{
			std::string name;
			Form *form;
		}				t_list;
};

#endif