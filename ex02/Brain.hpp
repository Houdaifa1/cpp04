# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain 
{

    private :

        std::string ideas[100];

    public :

        Brain ( void );
        Brain ( std::string idea);
        ~Brain ( void );
        Brain ( const Brain &ref);
        Brain &operator=( const Brain &ref);

        // void setIdea(int index, const std::string& idea);
        // std::string getIdea(int index) const;
};






# endif