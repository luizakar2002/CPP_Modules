#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void execute(Bureaucrat const & executor) const override;
		const std::string &getTarget() const;
};

#endif