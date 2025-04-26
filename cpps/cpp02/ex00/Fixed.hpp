# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


class Fixed 
{
    private :

        int                 fix_value;
        static const int    fract_bit;

    public : 

        Fixed   ( void );
        Fixed   ( const Fixed &ref );
        Fixed   &operator=( const Fixed &ref );
        ~Fixed ( void );
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};





# endif