#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat const & other);
        ~Cat();

        Cat &operator=(Cat const & other);
        Animal &operator=(Animal const & other) override;

        void makeSound() const override;
        Brain *getBrain() const override;
};

#endif