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
    Fixed operator+(const Fixed&);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed operator-(const Fixed&);
    Fixed& operator--();
    Fixed operator--(int);
    Fixed operator*(const Fixed&);
    Fixed operator/(const Fixed&);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(const int raw);
    int toInt( void ) const;
    float toFloat( void ) const;
    static Fixed& min(Fixed&a, Fixed&b);
    static Fixed const & min(const Fixed&a, const Fixed&b);
    static Fixed& max(Fixed&a, Fixed&b);
    static Fixed const & max(const Fixed&a, const Fixed&b);
};

std::ostream& operator<<(std::ostream &stream, const Fixed&);

#endif