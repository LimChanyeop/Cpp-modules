#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(){
    std::string buffer;
    PhoneBook pb;

    while(1){
		std::cout << "Enter Command: ";
        std::getline(std::cin, buffer);
        if (buffer.compare("EXIT") == 0 || std::cin.eof()){
            break;
        } else if (buffer.compare("ADD") == 0){
            std::string fn, ln, nn, pn, ds;
            while (fn.length() == 0){
				std::cout << "Insert firstname: ";
				getline(std::cin, fn);
			}
			while (ln.length() == 0){
				std::cout << "Insert lastname: ";
				getline(std::cin, ln);
			}
			while (nn.length() == 0){
				std::cout << "Insert nickname: ";
				getline(std::cin, nn);
			}
			while (pn.length() == 0){
				std::cout << "Insert phone_number: ";
				getline(std::cin, pn);
			}
			while (ds.length() == 0){
				std::cout << "Insert darkest_secret: ";
				getline(std::cin, ds);
			}
            pb.addContact(fn, ln, nn, pn, ds);
            std::cout << "Contact ADD COMPLETED" << std::endl;
        } else if (buffer.compare("SEARCH") == 0){
			if (pb.getIndex() == 0){
				pb.printZeroIndexError();
				continue;
			}
			
            pb.printLists();
            std::cout << "Search INDEX: ";
            getline(std::cin , buffer);
			int i = 0;
			while(i < (int)buffer.length()){
				if (isdigit(buffer[i]) == 0){
					pb.printIndexconditionError();
					break;
				}
				i++;
			}
			if (i == (int)buffer.length())
            	pb.printTarget(std::stoi(buffer));
        }
    }
}