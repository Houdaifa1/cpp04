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
};

std::ostream &operator<<(std::ostream &out, const Fixed &ref);






# endif