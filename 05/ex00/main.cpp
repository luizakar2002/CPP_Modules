#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("b1", 2);
		Bureaucrat b2("b2", 160);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat b3("b3", 2);
		std::cout << b3 << std::endl;
		b3.increase(2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}