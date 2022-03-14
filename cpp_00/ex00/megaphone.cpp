#include <iostream>

int main(int argc, char *argv[]){
	std::string	cmd = "";
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        for (int i = 1; i < argc; i++){
			char	c;
            for (int j = 0; argv[i][j] != 0; j++){
				if (std::isalpha(argv[i][j]))
					c = std::toupper(argv[i][j]);
				cmd += c;
            }
        }
    }
    std::cout << cmd << std::endl;
}