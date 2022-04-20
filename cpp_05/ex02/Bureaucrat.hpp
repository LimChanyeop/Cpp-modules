#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

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
		int	getGrade(void)const;

		void	increment(void);
		void	decrement(void);

		class GradeTooHighException : public std::exception{
		public:
			const char * what () const throw ();
		};
		class GradeTooLowException : public std::exception{
		public:
			const char * what () const throw ();
		};

		void	signForm(Form &);
		void	executeForm(Form const & form);
};

std::ostream & operator<< (std::ostream&, Bureaucrat const &);

#endif