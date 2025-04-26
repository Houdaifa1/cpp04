# include "Fixed.hpp"

const int Fixed::fract_bit = 8;

std::ostream    &operator<<(std::ostream &cout, const Fixed &ref)
{
    cout << ref.toFloat() ;
    return cout;
}

Fixed::Fixed ( void )
{
    std::cout << "Default constructor called"
    << std::endl;
    fix_value = 0;
}

Fixed::Fixed (const int fix_value )
{
    std::cout << "Int constructor called"
    << std::endl;
    this->fix_value = fix_value * 256; 
}

Fixed::Fixed (const float num )
{
    std::cout << "Float constructor called"
    << std::endl;
    this->fix_value = roundf( num * 256); 
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

float Fixed::toFloat ( void ) const
{
    float num;

    num = fix_value / 256.0;
    return (num);
}

int Fixed::toInt ( void ) const
{
    return (fix_value >> 8 );
}