# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>


class Animal
{
    protected :

        std::string type;

    public :

        Animal( void );
        Animal ( std::string animal_type );
        virtual ~Animal ( void );
        Animal ( const Animal &ref );
        Animal &operator=( const Animal &ref );

        virtual void makeSound( void ) const = 0;
        std::string getType( void )const;

};






# endif