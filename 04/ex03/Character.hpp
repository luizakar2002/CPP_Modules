#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria *inventory[4];
		int n_of_inventions;
		std::string name;
	public:
		Character();
		Character(std::string &name);
		Character(Character const & other);
		~Character();

		Character &operator=(Character const & other);
		std::string const	&getName() const ;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter & target);
};

#endif