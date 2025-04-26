# include "Fixed.hpp"

const int Fixed::fract_bit = 8;

Fixed &Fixed::max(Fixed &fix_num1, Fixed &fix_num2)
{
    if (fix_num1 > fix_num2)
        return (fix_num1);
    return (fix_num2);
}

const Fixed &Fixed::max(const Fixed &fix_num1, const Fixed &fix_num2)
{
    if (fix_num1 > fix_num2)
        return (fix_num1);
    return (fix_num2);
}

Fixed &Fixed::min(Fixed &fix_num1, Fixed &fix_num2)
{
    if (fix_num1 < fix_num2)
        return (fix_num1);
    return (fix_num2);
}

const Fixed &Fixed::min(const Fixed &fix_num1, const Fixed &fix_num2)
{
    if (fix_num1 < fix_num2)
        return (fix_num1);
    return (fix_num2);
}


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


// comparison operators

bool    Fixed::operator> (const Fixed &ref) const
{
    if ((this->getRawBits()) > (ref.getRawBits()))
        return (true);
    return (false);
}

bool    Fixed::operator< (const Fixed &ref) const
{
    if ((this->getRawBits()) < (ref.getRawBits()))
        return (true);
    return (false);
}

bool    Fixed::operator>= (const Fixed &ref) const
{
    if ((this->getRawBits()) >= (ref.getRawBits()))
        return (true);
    return (false);
}

bool    Fixed::operator<= (const Fixed &ref) const
{
    if ((this->getRawBits()) <= (ref.getRawBits()))
        return (true);
    return (false);
}

bool    Fixed::operator== (const Fixed &ref) const
{
    if ((this->getRawBits()) == (ref.getRawBits()))
        return (true);
    return (false);
}

bool    Fixed::operator!= (const Fixed &ref) const
{
    if ((this->getRawBits()) != (ref.getRawBits()))
        return (true);
    return (false);
}



//arithmetic operators

Fixed   Fixed::operator+( const Fixed &ref)
{
    Fixed result;

    result.setRawBits(ref.getRawBits() + this->getRawBits());
    return (result); 
}

Fixed   Fixed::operator-( const Fixed &ref)
{
    Fixed result;

    result.setRawBits(this->getRawBits() - ref.getRawBits());
    return (result); 
}

Fixed   Fixed::operator*( const Fixed &ref)
{
    Fixed result;
    long res;

    res = (long)this->getRawBits() * ref.getRawBits();
    result.setRawBits( res >> 8);
    return (result); 
}

Fixed   Fixed::operator/( const Fixed &ref)
{
    Fixed result;
    long res;

    res = (long)this->getRawBits() << 8;
    result.setRawBits( res / ref.getRawBits());
    return (result); 
}



//  increment/decrement

Fixed&   Fixed::operator++( )
{
    this->fix_value++;
    return (*this);
}

Fixed   Fixed::operator++( int )
{
    Fixed copy(*this);

    
    this->fix_value++;
    return (copy);
}

Fixed&   Fixed::operator--( )
{
    this->fix_value--;
    return (*this);
}

Fixed   Fixed::operator--( int )
{
    Fixed copy(*this);
    
    this->fix_value--;
    return (copy);
}
