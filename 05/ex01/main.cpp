#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	
	try
	{
		Bureaucrat b1("b1", 2);
		Form f1("f1", 30, 40);
		std::cout << f1 << std::endl;
		b1.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b2("b2", 160);
		Form f2("f2", 0, 160);
		std::cout << f2 << std::endl;
		b2.signForm(f2);
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}