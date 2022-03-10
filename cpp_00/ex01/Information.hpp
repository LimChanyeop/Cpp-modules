#ifndef INFORMATION_HPP
#define INFORMATION_HPP

#include <string>
#include <iostream>

class Information {
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
	Information();
	~Information();

    // constructor
    void makeInformation(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
    void printNames();
    void printAllInformation();
	std::string getElements(std::string element);

};

#endif