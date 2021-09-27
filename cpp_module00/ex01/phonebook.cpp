#include "phonebook.hpp"

int main()
{
	std::string com;
	int	i;
	int	j;
	int	in;
	Contact	con[8];
	std::string small[3];
	std::string ch[11] = {"first name", "last name", "nickname", "login", "postal address", "email address", "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};

	std::cout << "Enter one of these commands: ADD, SEARCH, EXIT" << std::endl;
	std::cin >> com;
	j = 0;
	while (com.compare("EXIT") != 0)
	{
		if (com.compare("ADD") == 0)
		{
			i = 0;
			if (j == 8)
				std::cout << "No more space left for adding a contact" << std::endl;
			else
			{
				while (i < 11)
				{
					std::cout << "Insert the " << ch[i] << ": ";
					std::cin >> con[j].info[i];
					i++;
				}
				j++;
			}
		}
		else if (com.compare("SEARCH") == 0)
		{
			i = 0;
			while (i < j)
			{
				in = -1;
				while (++in < 3)
				{
					small[in] = con[i].info[in];
					if (small[in].size() > 10)
					{
						(small[in]).replace(small[in].begin(), small[in].end(), small[in].begin(), small[in].begin() + 10);
						small[in][9] = '.';
					}
				}
				std::cout << std::right << std::setw(10) << i << "|" << std::setw(10) << small[0] << "|" << std::setw(10) << small[1] << "|" << std::setw(10) << small[2] << std::endl;
				i++;
			}
			if (j != 0)
			{
				std::cout << "Input the desired index of a contact: ";
				std::cin >> in;
				if (in > j)
					std::cout << "Not valid index" << std::endl;
				else
				{
					i = 0;
					while (i < 11)
					{
						std::cout << con[in].info[i] << std::endl;
						i++;
					}
				}
			}
		}
		else
			std::cout << "Not valid command" << std::endl;
		std::cout << "Enter one of these commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> com;
	}
	return (0);
}