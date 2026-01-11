#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
    int value;
    static const int fraction;

    public :
    Fixed();
    Fixed( Fixed const&);
    Fixed& operator=(const Fixed&);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(const int raw);
};

#endif