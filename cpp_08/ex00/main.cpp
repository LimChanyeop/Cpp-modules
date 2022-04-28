#include "easyfind.hpp"

int main(){
	{
		std::cout << "list Test" << std::endl;
		std::list<int> i_list;

		for (int i = 0; i < 10; i++) { i_list.push_back(i * 2); }
		for (std::list<int>::iterator it = i_list.begin(); it != i_list.end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;
		
		try {
			std::cout << *easyfind(i_list, 10) << std::endl;
			std::cout << *easyfind(i_list, 18) << std::endl;
			std::cout << *easyfind(i_list, 20) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "vector Test" << std::endl;
		std::vector<int> vec(10);

		for (int i = 0; i < 10; i++) { vec[i] = (i * 3); }
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;

		try {
			std::cout << *easyfind(vec, 15) << std::endl;
			std::cout << *easyfind(vec, 27) << std::endl;
			std::cout << *easyfind(vec, 30) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	// {
	// 	std::cout << "stack Test" << std::endl;
	// 	std::stack<int> st;

	// 	for (int i = 0; i < 10; i++) { 
	// 		st.push(i * 3); 
	// 		std::cout << i * 3 << " ";
	// 	}
	// 	std::cout << std::endl;
	// 	try{
	// 	std::cout << easyfind(st, 18) << std::endl;
	// 	// try {
	// 	// 	std::cout << *easyfind(st, 15) << std::endl;
	// 	// 	std::cout << *easyfind(st, 27) << std::endl;
	// 	// 	std::cout << *easyfind(st, 30) << std::endl;
	// 	// }
	// 	} catch (std::exception &e) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
}