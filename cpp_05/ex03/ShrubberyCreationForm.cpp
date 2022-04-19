#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
	std::cout << "ShrubberyForm Default Constructor "<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyForm Default Destructor  " << std::endl;  
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
						: Form ("ShrubberyForm", 145 ,137){
	std::cout << "ShrubberyForm Parmeterized Constructor " << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sf)
								: Form ("ShrubberyForm", 145 ,137){
	std::cout << "ShrubberyForm Copy Constructor " << std::endl;
	*this = sf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s){
    std::cout << "ShrubberyForm Assignation Operator" << std::endl;
    this->target = s.target;
    return (*this);
}

void		ShrubberyCreationForm::execute(Bureaucrat const &b)const
{
	if (this->getSigned() == 0)
		throw Form::NotSigned();	
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream outfile(this->target + "_shrubbery");

	outfile <<  "                                   .         ;		 "	<< std::endl;
	outfile <<  "      .              .              ;%     ;;		 "	<< std::endl;
	outfile <<  "        ,           ,                :;%  %;		 "	<< std::endl;
	outfile <<  "         :         ;                   :;%;'     ., "	<< std::endl;
	outfile <<  ",.        %;     %;            ;        %;'    ,;	 "	<< std::endl;
	outfile <<  "  ;       ;%;  %%;        ,     %;    ;%;    ,%'	 "	<< std::endl;
	outfile <<  "   %;       %;%;      ,  ;       %;  ;%;   ,%;'	 "	<< std::endl;
	outfile <<  "    ;%;      %;        ;%;        % ;%;  ,%;'		 "	<< std::endl;
	outfile <<  "     `%;.     ;%;     %;'         `;%%;.%;'		 "	<< std::endl;
	outfile <<  "      `:;%.    ;%%. %@;        %; ;@%;%'			 "	<< std::endl;
	outfile <<  "         `:%;.  :;bd%;          %;@%;'				 "	<< std::endl;
	outfile <<  "           `@%:.  :;%.         ;@@%;'				 "	<< std::endl;
	outfile <<  "             `@%.  `;@%.      ;@@%;				 "	<< std::endl;
	outfile <<  "               `@%%. `@%%    ;@@%;					 "	<< std::endl;
	outfile <<  "                 ;@%. :@%%  %@@%;					 "	<< std::endl;
	outfile <<  "                   %@bd%%%bd%%:;					 "	<< std::endl;
	outfile <<  "                     #@%%%%%:;;					 "	<< std::endl;
	outfile <<  "                     %@@%%%::;						 "	<< std::endl;
	outfile <<  "                     %@@@%(o);  . '				 "	<< std::endl;
	outfile <<  "                     %@@@o%;:(.,					 "	<< std::endl;
	outfile <<  "                 `.. %@@@o%::;						 "	<< std::endl;
	outfile <<  "                    `)@@@o%::;						 "	<< std::endl;
	outfile <<  "                     %@@(o)::;						 "	<< std::endl;
	outfile <<  "                    .%@@@@%::;						 "	<< std::endl;
	outfile <<  "                    ;%@@@@%::;.					 "	<< std::endl;
	outfile <<  "                   ;%@@@@%%:;;;.					 "	<< std::endl;
	outfile <<  "               ...;%@@@@@%%:;;;;,.. 				 "	<< std::endl;
	outfile.close();
}