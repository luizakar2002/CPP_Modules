#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const & other);
        ~Dog();

        Dog &operator=(Dog const & other);
        Animal &operator=(Animal const & other) override;

        void makeSound() const override;
        Brain *getBrain() const override;
};

#endif