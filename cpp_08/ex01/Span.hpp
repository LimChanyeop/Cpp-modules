#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <deque>

class Span {

private:
	unsigned int		N;
	std::vector<int>	vec;
	Span();

public:
	Span( const unsigned int &N );
	Span( const Span &Ref );
	virtual ~Span( void );

	Span &operator=( const Span &Ref );

	unsigned int		getMaxSize( void ) const;
	std::vector<int>	getContainer( void ) const;

	void				addNumber( const int &num );
	void				addManyNumber( const int count );
	unsigned int		shortestSpan( void );
	unsigned int		longestSpan( void );

	class e_calculate_unable : public std::exception {
	public:
		const char *what() const throw() {
			return ("Cannot Calculate Span");
		}
	};

	class e_capacity_full : public std::exception {
	public:
		const char *what() const throw() {
			return ("Not Enough Capacity");
		}
	};

	class e_content_full : public std::exception {
	public:
		const char *what() const throw() {
			return ("Full Container Contents");
		}
	};

};

#endif