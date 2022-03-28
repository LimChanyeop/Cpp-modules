#include <iostream>

int main(int argc, char *argv[]){
	std::string	cmd;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        for (int i = 1; i < argc; i++){
            for (int j = 0; argv[i][j] != 0; j++){
				if (std::isalpha(argv[i][j]))
					cmd += std::toupper(argv[i][j]);
				else
					cmd += argv[i][j];
            }
        }
    }
    std::cout << cmd << std::endl;
}