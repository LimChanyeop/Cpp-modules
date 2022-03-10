#include "PhoneBook.hpp"



PhoneBook::PhoneBook(){
	index = 0;
}
PhoneBook::~PhoneBook( void ){};

void PhoneBook::addInformation(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	if (index < 7){
		info[index].makeInformation(fn, ln, nn, pn, ds);
		index++;
	}
	else {
		for (int i = 0; i < 7; i++){
			Information temp;
			temp.makeInformation("","","","","");
			temp = info[i];
			info[i] = info[i + 1];
			info[i+1] = info[i];
		}
		info[7].makeInformation(fn, ln, nn, pn, ds);
	}
}

void PhoneBook::printLists( void ) {
	for (int i = 0; i < index ; i++){
		std::cout << i << "|";
		info[i].printNames();
	}
}

void PhoneBook::printTarget( int target_idx ) {
	if (target_idx < 0 || target_idx > index)
		PhoneBook::printIndexError();
	else
		info[target_idx].printAllInformation();
}

void PhoneBook::printIndexError( void ){
	std::cout << "ERROR : WRONG INDEX" << std::endl;
}