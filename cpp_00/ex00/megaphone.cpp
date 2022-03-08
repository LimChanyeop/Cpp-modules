#include <iostream>

int is_alpha(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_upper(char c){
    if (c >= 'a' && c <= 'z'){
        return (c - ('a' - 'A'));
    } else {
        return (c);
    }
}

int main(int argc, char *argv[]){
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else{
        for (int i = 1; i < argc; i++){
            for (int j = 0; argv[i][j] != 0; j++){
                std::cout << to_upper(argv[i][j]);
            }
        }
        std::cout << std::endl;
    }
}