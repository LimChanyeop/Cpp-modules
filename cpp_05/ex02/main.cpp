#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	{
		std::cout << "\n--- Test For Shrubbery Form ---\n" << std::endl;
		try
		{
			Bureaucrat b("B-one", 136);
			ShrubberyCreationForm sh("target");
			std::cout << sh << std::endl;
			sh.beSigned(b);
			sh.execute(b);
			std::cout << "Before decrementing : "<< b << std::endl;
			b.decrement();
			std::cout << "After decrementing : " << b << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n--- Test For Robotomy Form ---\n" << std::endl;
		try
		{
			Bureaucrat b("B-one", 76);
			RobotomyRequestForm rb("target");
			// rb.execute(b);
			// b.executeForm(rb);
			b.signForm(rb);
			rb.beSigned(b);
			std::cout << "Before incrementing : "<< b << std::endl;
			b.increment();
			std::cout << "After incrementing : " << b << std::endl;
			rb.execute(b);

		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
		{
		std::cout << "\n--- Test For Presidential Form ---\n" << std::endl;
		try
		{
			Bureaucrat b("B-one", 136);
			PresidentialPardonForm p("target");
			p.execute(b);
			p.beSigned(b);
			std::cout << "Before decrementing : "<< b << std::endl;
			b.decrement();
			std::cout << "After decrementing : " << b << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return EXIT_SUCCESS;
}