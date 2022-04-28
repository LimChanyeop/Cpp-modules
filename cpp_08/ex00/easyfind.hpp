#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <array>
#include <stack>
#include <queue>
#include <list>

class e_out_of_range : public std::exception {
public:
	const char* what() const throw() {
		return ("OUT OF RANGE");
	}
};

template <typename T>
typename T::iterator	easyfind(T container, int occur){
	typename T::iterator it = std::find (container.begin(), container.end(), occur);
	if (it == container.end())
		throw e_out_of_range();
	else
		return (it);
};

// template <typename T>
// int	easyfind(std::stack<T> st, int occur) //LIFO
// {
// 	size_t size = st.size();
// 	std::vector<T> v;
// 	for (size_t i = 0; i < size; i++){
// 		v.push_back(st.top());
// 		st.pop();
// 	}
// 	return ((easyfind(v, occur) - v.begin()) / sizeof(int));
// };

// template <typename T>
// typename T::iterator		easyfind(std::queue<T> st, int occur) //FIFO
// {
// 	size_t size = st.size();
// 	std::vector<T> v;
// 	for (size_t i = 0; i < size; i++){
// 		v.push_back(st.front());
// 		st.pop();
// 	}
// 	return easyfind(v, occur);
// };

// template <typename T>
// typename T::iterator		easyfind(std::priority_queue<T> st, int occur) //FIFO
// {
// 	size_t size = st.size();
// 	std::vector<T> v;
// 	for (size_t i = 0; i < size; i++){
// 		v.push_back(st.top());
// 		st.pop();
// 	}
// 	return easyfind(v, occur);
// };

#endif