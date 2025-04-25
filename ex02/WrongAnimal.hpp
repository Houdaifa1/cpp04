# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>


class WrongAnimal
{
    protected :

        std::string type;

    public :

        WrongAnimal( void );
        WrongAnimal ( std::string animal_type );
        ~WrongAnimal ( void );
        WrongAnimal ( const WrongAnimal &ref );
        WrongAnimal &operator=( const WrongAnimal &ref );

        void makeSound( void ) const;
        std::string getType( void )const;

};






# endif