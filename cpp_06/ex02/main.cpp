#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *	generate(void)
{
	Base * random;

	int type = rand() % 3;

	switch(type) {
		case 0 : random = new A;
			std::cout << "it is A" << std::endl;
			break;
		case 1 : random = new B;
			std::cout << "it is B" << std::endl;
			break;
		case 2 : random = new C;
			std::cout << "it is C" << std::endl;
			break;
	}

	return random;
}

void	identify(Base* p)
{
	A * a = dynamic_cast<A *>(p);

	if (!a) {
		B * b = dynamic_cast<B *>(p);

		if (!b) {
			C * c = dynamic_cast<C *>(p);

			if (!c) {
				std::cout << "invalid type" << std::endl;
			} else { std::cout << "C" << std::endl; }
		} else { std::cout << "B" << std::endl; }
	} else { std::cout << "A" << std::endl; }
}

void	identify(Base& p)
{
	try {
		A & a = dynamic_cast<A &>(p);
		(void)a;// to avoid unused variable warning
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast & e) {
		(void)e;
		try {
			B & b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast & e) {
			(void)e;
			try {
				C & c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast & e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}

int main(void)
{
	std::srand((unsigned int)time(NULL));

	Base * random = generate();

	identify(random);
	identify(*random);
	delete random;

	random = new Base();

	identify(random);
	identify(*random);
	delete random;

    return (0);
}