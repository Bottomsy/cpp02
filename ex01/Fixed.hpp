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
    Fixed(const int);
    Fixed(const float);
    Fixed( Fixed const&);
    Fixed& operator=(const Fixed&);
    Fixed& operator*(std::ostream daw);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(const int raw);
    int toInt( void ) const;
    float toFloat( void ) const;
};

#endif