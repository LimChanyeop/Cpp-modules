#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
	std::cout << "PresidentialForm Default Constructor "<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialForm Default Destructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5){
	std::cout << "PresidentialForm Parmeterized Constructor " << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & pf): Form("PresidentialPardonForm", 25, 5){
	std::cout << "PresidentialForm Copy Constructor " << std::endl;
	*this = pf;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& p){
	std::cout << "PresidentialForm Assignation Operator" << std::endl;
	this->target = p.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &b)const{
	if (this->getSigned() == 0)
		throw Form::NotSigned();	
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->target <<  " has been pardoned by Zafod Beeblebrox" << std::endl;
}