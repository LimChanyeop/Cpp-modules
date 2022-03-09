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
    // constructor
    void makeInformation(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
    {
        firstname = fn;
        lastname = ln;
        nickname = nn;
        phone_number = pn;
        darkest_secret = ds;
    };

    void printNames(){
        std::string fn;
        std::string ln;
        std::string nn;

        if (firstname.length() > 10){
            fn = firstname.substr(0, 8);
            std::cout << fn << std::endl;
            fn.push_back('.');
        } else {
            fn = firstname;
        }
        if (lastname.length() > 10){
            ln = lastname.substr(0, 8);
            ln.push_back('.');
        } else {
            ln = lastname;
        }
        if (nickname.length() > 10){
            nn = lastname.substr(0, 8);
            nn.push_back('.');
        } else {
            nn = nickname;
        }
        std::cout << fn << "|" << ln << "|" << nn << std::endl;
    }


    void printAllInformation(){
        std::cout << firstname << std::endl << lastname << std::endl << nickname << std::endl << phone_number << std::endl << darkest_secret << std::endl;
    }
};

#endif