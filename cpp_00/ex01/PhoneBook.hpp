#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
    Contact info[8];
    int index;

public:
    PhoneBook( void );
	~PhoneBook( void );

    void addContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
    void printLists( void );
    void printTarget( int target_idx );
	void printIndexError( void );
	void printIndexconditionError( void );
	void printZeroIndexError( void );
	int getIndex( void );
};

#endif