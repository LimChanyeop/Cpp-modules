#include "Span.hpp"

int	main()
{
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// std::vector<int> vec = sp.get_arr();
		// std::cout << *(vec.end()) - *(vec.begin());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(11);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "=========== test 2 ============\n";
		Span test = Span(5);
		test.addManyNumber(5);
		std::cout << "------Random span test------\n";
		std::cout << "shortest : " << test.shortestSpan() << std::endl;
		std::cout << " longest : " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}