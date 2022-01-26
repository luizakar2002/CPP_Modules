#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *templates[4];
		int n_of_templates;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & other);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const & other);

		void learnMateria(AMateria *m_to_learn);
		AMateria* createMateria(std::string const & type);
};

#endif