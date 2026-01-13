#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private :
    int integer;
    static const int fraction;

    public :
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed( Fixed const&);
    Fixed& operator=(const Fixed&);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(const int raw);
    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream &stream, const Fixed&);

#endif