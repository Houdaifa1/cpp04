# ifndef CAT_HPP
# define CAT_HPP 

# include "Animal.hpp"


class Cat : public Animal
{
    public :

        Cat( void );
        ~Cat ( void );
        Cat ( const Cat &ref );
        Cat &operator=( const Cat &ref );

        void makeSound() const ;
};






# endif