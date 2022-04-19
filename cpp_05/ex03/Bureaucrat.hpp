#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat &operator=(const Bureaucrat&);
		
		std::string	getName(void) const;
		int	getGrade(void) const;

		void	increment(void);
		void	decrement(void);

		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what () const throw ();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what () const throw ();
		};
};

std::ostream &operator<< (std::ostream&, Bureaucrat const &);

#endif