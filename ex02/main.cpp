# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    int size = 4;
    Animal *my_animals[size];
    

    for (int i = 0; i < size ; i++)
    {
        if (i < size / 2)
            my_animals[i] =  new Dog();
        else
            my_animals[i] = new Cat();
    }
    for (int i = 0; i < size; i++)
    {
        delete my_animals[i];
    }

    std::cout << "\n----- Deep copy test -----\n\n";
    // Dog atome;
    // Dog rex ;
    // rex.setBrainIdea(0, "rex has an idea");
    // atome.setBrainIdea(0, "atome has an idea");
    // rex = atome;
    // rex.setBrainIdea(0, "reeeeeeeeeeeex");
    // std::cout << atome.getBrainIdea(0) << std::endl;
    // std::cout << rex.getBrainIdea(0) << std::endl;

}