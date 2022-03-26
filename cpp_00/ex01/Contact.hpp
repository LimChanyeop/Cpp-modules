#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
	Contact();
	~Contact();

    void makeContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
    void printNames();
    void printAllContact();
	std::string getElements(std::string element);

};

#endif