# ifndef CAT_HPP
# define CAT_HPP 

# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal
{    
    private:

        Brain *My_brain;

    public :

        Cat( void );
        ~Cat ( void );
        Cat ( const Cat &ref );
        Cat &operator=( const Cat &ref );

        void makeSound() const ;
        // void setBrainIdea(int index, const std::string& idea);
        // std::string getBrainIdea(int index) const;

};






# endif