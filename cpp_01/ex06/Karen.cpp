#include "Harl.hpp"
#include <iostream>

void Harl::debug( void ){
    std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon "
	<< "for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< std::endl
	<< "I just love it!" << std::endl << std::endl;
}

void Harl::info( void ){
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money."
	<< std::endl
	<< "You don’t put enough!"
	<< std::endl
	<< "If you did I would not have to ask for it!"
	<< std::endl << std::endl;
}

void Harl::warning( void ){
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
	<< std::endl
	<< "I’ve been coming here "
	<< "for years and you just started working here last month."
	<< std::endl << std::endl;
}

void Harl::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, "
	<< "I want to speak to the manager now."
	<< std::endl << std::endl;
}

void Harl::complain( std::string level ){
    int printed = FALSE;
    std::string level_list[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++){
        if (level == level_list[i])
        {
            switch (i)
            {
            case debug_idx:
                debug();
            case info_idx:
                info();
            case warning_idx:
                warning();
            case error_idx:
                error();
                printed = TRUE;
                break;
            }
        }
    }
    if (printed == FALSE)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}