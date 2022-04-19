#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Bureaucrat b("bur2", 150);
		Form f1("form1" , 3, 5);
		std::cout << f1 << std::endl;
		f1.beSigned(b);
		b.decrement();
		std::cout << b << std::endl;
		b.decrement();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << " ----------- \n\n";
	{
		try
		{
			Bureaucrat a("bur1", 1);
			Form f1("form1" , 3, 5);
			std::cout << f1 << std::endl;
			f1.beSigned(a);
			std::cout << f1 << std::endl;
			std::cout << a << std::endl;
			a.decrement();
			std::cout << a << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return (1);
}