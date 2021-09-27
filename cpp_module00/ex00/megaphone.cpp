#include <iostream>

int main(int argc, char **argv)
{
	std::string s;
	int	i;
	int	j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	j = 1;
	while (j < argc)
	{		
		s = argv[j];
		i = 0;
		while (i < s.size())
		{
			s[i] = std::toupper(s[i]);
			i++;
		}
		std::cout << s;
		j++;
	}
	std::cout << std::endl;
	return (0);
}