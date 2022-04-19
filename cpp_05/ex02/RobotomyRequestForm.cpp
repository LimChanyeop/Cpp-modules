#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
	std::cout << "RobotomyForm Default Constructor "<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyForm Default Destructor " << std::endl;  
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
							: Form("RobotomyRequestForm", 72, 45){
	std::cout << "RobotomyForm Parmeterized Constructor " << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rf): Form("RobotomyRequestForm", 72, 45){
	std::cout << "RobotomyForm Copy Constructor " << std::endl;
	*this = rf;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& r){
	std::cout << "RobotomyForm = Operator" << std::endl;
	this->target = r.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &b)const
{
	int random;
	if (this->getSigned() == 0)
		throw Form::NotSigned();	
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	random = rand();
	if (random % 2)
		std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << "IT'S a FAILURE." << std::endl;
}