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
    bool operator<(const Fixed&);
    bool operator>(const Fixed&);
    bool operator<=(const Fixed&);
    bool operator>=(const Fixed&);
    bool operator==(const Fixed&);
    bool operator!=(const Fixed&);
    Fixed& operator+(const Fixed&);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator-(const Fixed&);
    Fixed& operator--();
    Fixed& operator--(int);
    Fixed operator*(const Fixed&);
    Fixed& operator/(const Fixed&);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(const int raw);
    int toInt( void ) const;
    float toFloat( void ) const;
    static Fixed& min(Fixed&, Fixed&);
    static Fixed& min(const Fixed&, const Fixed&);
    static Fixed& max(Fixed&, Fixed&);
    static Fixed& max(const Fixed&, const Fixed&);
};

std::ostream& operator<<(std::ostream &stream, const Fixed&);

#endif