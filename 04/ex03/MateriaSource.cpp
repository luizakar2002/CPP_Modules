#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): n_of_templates(0)
{
	for (int i = 0; i < 4; i++)
		this->templates[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
	*this = other;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i])
			delete this->templates[i];
	}
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	this->n_of_templates = other.n_of_templates;
	for(int i = 0; i < other.n_of_templates; i++)
	{
		if (this->templates[i])
			delete this->templates[i];
		this->templates[i] = other.templates[i];
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria *m_to_learn)
{
	if (this->n_of_templates >= 4)
		std::cout << "Can't learn any more materias" << std::endl;
	else
	{
		this->templates[this->n_of_templates] = m_to_learn;
		this->n_of_templates++;
		std::cout << "Learned " << m_to_learn->getType() << " Materia" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && this->templates[i]; i++)
	{
		if (type == this->templates[i]->getType())
			return this->templates[i]->clone();
	}
	return NULL;
}