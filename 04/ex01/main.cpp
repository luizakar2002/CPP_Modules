#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[4];
	Brain *brain;
	int z;

	z = -1;
	while (++z < 2)
	{
		Dog *dog = new Dog();
		animals[z] = dog;
	}
	z--;
	while (++z < 4)
		animals[z] = new Cat();

	brain = animals[3]->getBrain();
	brain->ideas[0] = "Idea...";
	brain->ideas[1] = "I spent more time on writing ideas than the code";
	brain->ideas[2] = "Suggest some, because";
	brain->ideas[3] = "I have no idea";
	std::cout << animals[3]->getBrain()->ideas[0] << std::endl;
	
	
	*(animals[1]) = *(animals[3]);
	std::cout << animals[1]->getBrain()->ideas[1] << std::endl;
	std::cout << "  Deep copy" << std::endl;
	std::cout << animals[1]->getBrain() << std::endl;
	std::cout << animals[3]->getBrain() << std::endl;

	z = -1;
	while (++z < 4)
		delete animals[z];
}