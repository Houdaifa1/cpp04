# include "Fixed.hpp"

const int Fixed::fract_bit = 8;

Fixed::Fixed ( void )
{
    std::cout << "Default constructor called"
    << std::endl;
    fix_value = 0;
}

Fixed::Fixed ( const Fixed &ref) 
{
    std::cout << "Copy constructor called"
    << std::endl;
    fix_value = ref.fix_value;
}

Fixed& Fixed::operator= ( const Fixed &ref )
{
    std::cout << "Copy assignment operator called"
    << std::endl;
    if (this != &ref)
        fix_value = ref.fix_value;
    return (*this);
}

Fixed::~Fixed ( void )
{
    std::cout << "Destructor called"
    << std::endl;
}

int Fixed::getRawBits ( void ) const 
{
    std::cout << "getRawBits member function called"
    << std::endl;
    return (fix_value);
}

void Fixed::setRawBits ( int const raw )
{
    std::cout << "setRawBits member function called"
    << std::endl;   
    fix_value = raw;
}