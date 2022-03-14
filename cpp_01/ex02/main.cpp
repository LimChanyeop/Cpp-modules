#include <iostream>

int main(){
	std::string str;
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "address of str : "<< &str << std::endl;
	std::cout << "stringPTR : "<< stringPTR << std::endl;
	std::cout << "stringREF : "<< &stringREF << std::endl;
	std::cout << "str by stringPTR : "<< *stringPTR << std::endl;
	std::cout << "str by stringREF : "<< stringREF << std::endl;
	return 0;
}