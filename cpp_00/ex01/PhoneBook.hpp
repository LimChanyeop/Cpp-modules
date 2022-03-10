#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Information.hpp"

class PhoneBook {
private:
    Information info[8];
    int index;


public:
    PhoneBook( void );
	~PhoneBook( void );

    void addInformation(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
    void printLists( void );
    void printTarget( int target_idx );
	void printIndexError( void );

};

#endif