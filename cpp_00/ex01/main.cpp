#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Information.hpp"

int main(){
    std::string buffer;
    PhoneBook pb;

    while(1){
        std::getline(std::cin, buffer);

		// if (buffer.compare("\0") == 0)
		// 	break;
        if (buffer.compare("EXIT") == 0){
            break;
        } else if (buffer.compare("ADD") == 0){
            std::string fn, ln, nn, pn, ds;
			std::cout << "Insert firstname : ";
            getline(std::cin, fn);
			std::cout << "Insert lastname : ";
            getline(std::cin, ln);
			std::cout << "Insert nickname : ";
            getline(std::cin, nn);
			std::cout << "Insert phone_number : ";
            getline(std::cin, pn);
			std::cout << "Insert darkest_secret: ";
            getline(std::cin, ds);
            pb.addInformation(fn, ln, nn, pn, ds);
            std::cout << "Information ADD COMPLETED" << std::endl;
        } else if (buffer.compare("SEARCH") == 0){
            pb.printLists();
            std::string buffer;
            std::cout << "Search INDEX : ";
            getline(std::cin , buffer);
			for(int i = 0; i < (int)buffer.length(); i++){
				if (isdigit(buffer[i] != 0)){
					std::cout << "ERROR";
					return 0;
				}
			}
            pb.printTarget(std::stoi(buffer));
        }
    }

}