# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"


class Dog : public Animal
{
    private:

        Brain *My_brain;

    public :

        Dog( void );
        ~Dog ( void );
        Dog ( const Dog &ref );
        Dog &operator=( const Dog &ref );

        void makeSound() const ;
        // void setBrainIdea(int index, const std::string& idea);
        // std::string getBrainIdea(int index) const;
};






# endif