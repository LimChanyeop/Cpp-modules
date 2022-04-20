#ifndef FORM_HPP_
#define FORM_HPP_

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		bool				_signed;
		const int			_grade_to_sign;
		const int			_grade_to_exec;
	public:
		Form();
		virtual ~Form();
		Form(std::string, int, int);
		Form(const Form&);

		std::string	getName(void) const;
		bool	getSigned(void) const;
		int		getGradetoSign(void) const;
		int		getGradetoExec(void) const;

		Form	&operator=(const Form&);
		
		class	GradeTooHighException : public std::exception{
			public:
				const char * what () const throw ();
		};
		class	GradeTooLowException : public std::exception{
			public:
				const char * what () const throw ();
		};
		
		class NotSigned : public std::exception{
            public:
            	const char* what() const throw();
        };

		void	beSigned(Bureaucrat &);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<< (std::ostream &o, const Form &);

#endif