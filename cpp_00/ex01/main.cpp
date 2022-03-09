#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Information.hpp"

int main(){
    std::string buffer;
    PhoneBook pb;

    while(1){
        std::getline(std::cin, buffer);
        if (buffer.compare("EXIT") == 0){
            break;
        } else if (buffer.compare("ADD") == 0){
            std::string fn, ln, nn, pn, ds;
            getline(std::cin, fn);
            getline(std::cin, ln);
            getline(std::cin, nn);
            getline(std::cin, pn);
            getline(std::cin, ds);
            pb.addInformation(fn, ln, nn, pn, ds);
            std::cout << "ADD COMPLETED" << std::endl;
        } else if (buffer.compare("SEARCH") == 0){
            pb.printLists();
            std::string buffer;
            std::cout << "INDEX : ";
            getline(std::cin , buffer);
            pb.printTarget(std::stoi(buffer));
        }
    }

    std::cout << buffer << std::endl;

}