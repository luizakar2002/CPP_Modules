#include "Character.hpp"

Character::Character(): n_of_inventions(0), name("")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string &name)
{
	*this = Character();
	this->name = name;
}

Character::Character(Character const & other)
{
	*this = other;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	return;
}

Character &Character::operator=(Character const & other)
{
	this->n_of_inventions = other.n_of_inventions;
	this->name = other.name;
	for(int i = 0; i < other.n_of_inventions; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = other.inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (this->n_of_inventions >= 4)
	{
		std::cout << "Couldn't equip a " << m->getType() << ", no more space" << std::endl;
		return ;
	}
	else
	{
		this->inventory[n_of_inventions] = m;
		this->n_of_inventions++;
		std::cout << "Equipped a " << m->getType() << std::endl;
	}
}

void	Character::unequip(int idx)
{
	int i;

	i = idx + 1;
	delete this->inventory[idx];
	while (i < 4 && this->inventory[i])
	{
		this->inventory[i - 1] = this->inventory[i];
		i++;
	}
	this->inventory[i] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}