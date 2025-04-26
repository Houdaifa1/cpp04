# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>


class Fixed 
{
    private :

        int                 fix_value;
        static const int    fract_bit;

    public : 

        Fixed   ( void );
        Fixed   ( const Fixed &ref );
        Fixed   ( const float num);
        Fixed   ( const int fix_value );
        Fixed   &operator=( const Fixed &ref );
        ~Fixed  ( void );
 
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int toInt( void ) const;


        // comparison operators
        bool    operator>(const Fixed &ref) const;
        bool    operator<(const Fixed &ref) const;
        bool    operator>=(const Fixed &ref) const;
        bool    operator<=(const Fixed &ref) const;
        bool    operator==(const Fixed &ref) const;
        bool    operator!=(const Fixed &ref) const;


        // arithmetic operators
        Fixed   operator+( const Fixed &ref);
        Fixed   operator-( const Fixed &ref);
        Fixed   operator*( const Fixed &ref);
        Fixed   operator/( const Fixed &ref);

        //  increment/decrement
        Fixed   &operator++( );
        Fixed   operator++(int);
        Fixed   &operator--( );
        Fixed   operator--(int);

        //  overloaded member functions
        static Fixed &max(Fixed &fix_num1, Fixed &fix_num2);
        static const Fixed &max(const Fixed &fix_num1, const Fixed &fix_num2);
        static Fixed &min(Fixed &fix_num1, Fixed &fix_num2);
        static const Fixed &min(const Fixed &fix_num1, const Fixed &fix_num2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &ref);

# endif