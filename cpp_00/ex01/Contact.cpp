#include "Contact.hpp"
#include <iomanip>

Contact::Contact(){};
Contact::~Contact(){};

void Contact::makeContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	firstname = fn;
	lastname = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = ds;
};

void Contact::printNames(){
	std::string fn;
	std::string ln;
	std::string nn;

	if (firstname.length() > 10){
		fn = firstname.substr(0, 9);
		fn.push_back('.');
	} else {
		fn = firstname;
	}
	if (lastname.length() > 10){
		ln = lastname.substr(0, 9);
		ln.push_back('.');
	} else {
		ln = lastname;
	}
	if (nickname.length() > 10){
		nn = lastname.substr(0, 9);
		nn.push_back('.');
	} else {
		nn = nickname;
	}
	std::cout << std::setw(10) << std::right << fn << "|" << std::setw(10) << std::right << ln << "|" << std::setw(10) << std::right << nn << "|" << std::endl;
}


void Contact::printAllContact(){
	std::cout << "firstname: " << firstname << std::endl \
				<< "lastname: " << lastname << std::endl\
				<< "nickname: " << nickname << std::endl\
				<< "phone_number: " << phone_number << std::endl\
				<< "darkest_secret: " << darkest_secret << std::endl;
}
