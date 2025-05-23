# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
    public :

        WrongCat( void );
        ~WrongCat ( void );
        WrongCat ( const WrongCat &ref );
        WrongCat &operator=( const WrongCat &ref );

        void makeSound() const ;
};

# endif 