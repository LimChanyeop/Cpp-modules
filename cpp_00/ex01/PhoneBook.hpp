#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Information.hpp"

class PhoneBook {
private:
    Information info[8];
    int index;
public:
    
    PhoneBook(){
        index = 0;
    }
    void addInformation(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
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

    void printLists() {
        for (int i = 0; i < index ; i++){
            std::cout << i << "|";
            info[i].printNames();
        }
    }

    void printTarget(int target_idx) {
        try {
            info[target_idx].printAllInformation();
        } catch (std::out_of_range &e){
            std::cout << "INDEX ERROR" << std::endl;
        }
    }
};

#endif