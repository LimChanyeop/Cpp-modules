#include "Span.hpp"
#include "time.h"
Span::Span( const unsigned int &N ): N(N) {}

Span::Span( const Span &Ref ) {
	this->N = Ref.getMaxSize();
	this->vec = Ref.getContainer();
}

Span::~Span( void ) {}
Span::Span(){};
Span &Span::operator=( const Span &Ref ) {
	this->N = Ref.getMaxSize();
	this->vec = Ref.getContainer();
	return (*this);
}

unsigned int	Span::getMaxSize( void ) const {
	return (this->N);
}

std::vector<int>	Span::getContainer( void ) const {
	return (this->vec);
}

void	Span::addNumber( const int &num ) {
	if (vec.size() >= N)
		throw e_content_full();
	this->vec.push_back(num);
}

int get_random_number()
{
	int ran = rand() / 10000000;
	if (ran % 2)
		ran *= -1;
	return (ran);
}

void	Span::addManyNumber( const int count ) {
	srand(time(NULL));
	if (count > (int)N)
		throw e_capacity_full();
	for (int i = 0; i < count; i++)
	{
		if (vec.size() >= N)
			throw (e_content_full());
		else
			this->vec.push_back(get_random_number());
	}
}

unsigned int		Span::shortestSpan( void ) {
	if (vec.size() < 2)
		throw e_calculate_unable();
	std::vector<int> temp = this->vec;
	std::sort(temp.begin(), temp.end());
	int diff = INT32_MAX;
	for (int i = 1; i < static_cast<int>(temp.size()); i++) {
		if (diff > temp[i] - temp[i - 1])
			diff = temp[i] - temp[i - 1];
	}
	return (static_cast<unsigned int>(diff));
}

unsigned int		Span::longestSpan( void ) {
	if (vec.size() < 2)
		throw e_calculate_unable();
	std::vector<int> temp = this->vec;
	std::sort(temp.begin(), temp.end());
	return (static_cast<unsigned int>(temp.back() - temp.front()));
}