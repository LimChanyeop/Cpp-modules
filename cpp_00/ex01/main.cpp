#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Information.hpp"

void runAdd(std::string firstname, std::string lastname, std::string nickname, std::string phone_number, std::string darkest_secret){

}

int main(){
    std::string buffer;
    Phonebook pb;

    while(1){
        std::getline(std::cin, buffer);
        if (buffer.compare("EXIT") == 0){
            break;
        } else if (buffer.compare("ADD") == 0){

        } else if (buffer.compare("SEARCH") == 0){
            
        }
    }

    std::cout << buffer << std::endl;

}