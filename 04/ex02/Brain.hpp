#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		static const int n_of_ideas = 100;
	public:
		Brain();
		Brain(Brain const & other);
		~Brain();

		Brain &operator=(Brain const & other);
		std::string ideas[Brain::n_of_ideas];
};

#endif