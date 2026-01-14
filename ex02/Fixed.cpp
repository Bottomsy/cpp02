#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    integer = 0;
}
Fixed::Fixed(const Fixed & other)
{
    std::cout << "Copy constructor called\n";
    this->integer = other.integer;
    *this = other;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called\n";
    integer = val * (1 << fraction);
}
Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called\n";
    integer = roundf(val * (1 << fraction));
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other) 
    {
        integer = other.integer;
    }
    return *this;
}

bool Fixed::operator<(const Fixed &other)
{
    return (integer < other.integer);
}
bool Fixed::operator>(const Fixed &other)
{
    return (integer > other.integer);
}
bool Fixed::operator<=(const Fixed &other)
{
    return (integer <= other.integer);
}
bool Fixed::operator>=(const Fixed &other)
{
    return (integer >= other.integer);
}
bool Fixed::operator==(const Fixed &other)
{
    return (integer == other.integer);
}
bool Fixed::operator!=(const Fixed &other)
{
    return (integer != other.integer);
}
Fixed& Fixed::operator+(const Fixed &other)
{
    integer += other.integer;
    return *this;
}
Fixed& Fixed::operator++()
{
    integer++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    integer++;
    return temp;
}
Fixed& Fixed::operator-(const Fixed &other)
{
    integer -= other.integer;
    return *this;
}
Fixed& Fixed::operator--()
{
    integer--;
    return *this;
}
Fixed& Fixed::operator--(int)
{
    integer++;
    return *this;
}
Fixed Fixed::operator*(const Fixed &other)
{
    Fixed res;
    res = integer * other.integer;
    res.integer >> fraction;
    return res;
}
Fixed& Fixed::operator/(const Fixed &other)
{
    integer /= other.integer;
    return *this;
}
    
std::ostream& operator<<(std::ostream &stream, const Fixed &obj)
{
    stream << obj.toFloat();
    return stream;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return integer;
}
void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called\n";
    integer = raw;
}

int Fixed::toInt( void ) const
{
    return integer / (1 << fraction);
}

float Fixed::toFloat( void ) const
{
    return (float)integer / (1 << fraction);
}

// static Fixed& min(Fixed &a, Fixed &b)
// {
//     if(a < b)
//         return a;
//     return b;
// }
// static Fixed& min(const Fixed &a, const Fixed &b)
// {
//     if(a.)
// }
// static Fixed& max(Fixed &a, Fixed &b)
// {

// }
// static Fixed& max(const Fixed &a, const Fixed &b)
// {

// }

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}