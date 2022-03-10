#include "Information.hpp"

	Information::Information(){};
	Information::~Information(){};

void Information::makeInformation(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	firstname = fn;
	lastname = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = ds;
};

void Information::printNames(){
	std::string fn;
	std::string ln;
	std::string nn;

	if (firstname.length() > 10){
		fn = firstname.substr(0, 8);
		fn.push_back('.');
	} else {
		fn = firstname;
	}
	if (lastname.length() > 10){
		ln = lastname.substr(0, 8);
		ln.push_back('.');
	} else {
		ln = lastname;
	}
	if (nickname.length() > 10){
		nn = lastname.substr(0, 8);
		nn.push_back('.');
	} else {
		nn = nickname;
	}
	std::cout << fn << "|" << ln << "|" << nn << std::endl;
}


void Information::printAllInformation(){
	std::cout << firstname << std::endl << lastname << std::endl << nickname << std::endl << phone_number << std::endl << darkest_secret << std::endl;
}

std::string Information::getElements(std::string element){ //COULDN'T BE USABLE
	if (element.compare("firstname") == 0)
		return (firstname);
	else if (element.compare("lastname") == 0)
		return (lastname);
	else if (element.compare("nickname") == 0)
		return (nickname);
	else if (element.compare("phone_number") == 0)
		return (phone_number);
	else if (element.compare("darkest_secret") == 0)
		return (darkest_secret);
	return (0);
};