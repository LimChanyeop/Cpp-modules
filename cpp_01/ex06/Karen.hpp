#ifndef KAREN_HPP
#define KAREN_HPP

#define debug_idx 0
#define info_idx 1
#define warning_idx 2
#define error_idx 3

#define TRUE 1
#define FALSE 0


#include <string>

class Karen{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Karen(){};
    ~Karen(){};
    void complain( std::string level );
};

#endif