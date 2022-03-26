#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){
	index = 0;
}
PhoneBook::~PhoneBook( void ){};

void PhoneBook::addContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	if (index <= 7){
		info[index].makeContact(fn, ln, nn, pn, ds);
		index++;
	}
	else {
		for (int i = 0; i < 7; i++){
			Contact temp;	
			temp.makeContact("","","","","");
			temp = info[i];
			info[i] = info[i + 1];
			info[i+1] = temp;
		}
		info[7].makeContact(fn, ln, nn, pn, ds);
	}
}

void PhoneBook::printLists( void ) {
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << "INDEX" << "|" << std::setw(10) << std::right << "firstname" << "|" << std::setw(10) << std::right << "lastname" << "|" << std::setw(10) << std::right << "nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < index ; i++){
		std::cout << std::setw(10) << std::right << i << "|"; 
		info[i].printNames();
	}
	std::cout << "--------------------------------------------" << std::endl;
}

void PhoneBook::printTarget( int target_idx ) {
	if (target_idx < 0 || target_idx >= index)
		PhoneBook::printIndexError();
	else
		info[target_idx].printAllContact();
}

void PhoneBook::printIndexError( void ){
	std::cout << "ERROR : WRONG INDEX" << std::endl;
}

void PhoneBook::printIndexconditionError( void ){
	std::cout << "Error: Index must be number (0 <= Index <= 7)" << std::endl;
}

void PhoneBook::printZeroIndexError( void ){
	std::cout << "Error: Cannot Search when index is zero" << std::endl;
}

int PhoneBook::getIndex( void ){
	return (index);
}