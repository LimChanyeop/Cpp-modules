#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "Type of the form : " << rrf->getName() << std::endl;
		{
			Intern someRandomIntern;
			Bureaucrat b("B", 1);
			Form *ret;

			ret = someRandomIntern.makeForm("shrubbery creation", "form");
			ret->beSigned(b);
			ret->execute(b);
			rrf->beSigned(b);
			rrf->execute(b);
			delete ret;
			delete rrf;
		}
		{
			try 
			{
				std::cout << "-- Invalid Form --" << std::endl;
				Intern someRandomIntern;
				Form *ret;

				ret = someRandomIntern.makeForm("cherry creation", "form");
				ret->execute(Bureaucrat());
			}
			catch (std::exception &e){
				std::cout << e.what() << std::endl;
			}
		}
	}
	catch (std::exception &e){
				std::cout << e.what() << std::endl;
			}
	return EXIT_SUCCESS;
}