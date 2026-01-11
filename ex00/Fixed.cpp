#include "Fixed.hpp"

const int Fixed::fraction = 0;

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    value = 0;
}
Fixed::Fixed(const Fixed & other)
{
    std::cout << "Copy constructor called\n";
    this->value = other.getRawBits();
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other) 
    {
        std::cout << "Copy assignment operator called\n";
        value = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return value;
}
void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called\n";
    value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}