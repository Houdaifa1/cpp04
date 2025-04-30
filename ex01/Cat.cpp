# include "Cat.hpp"


Cat::Cat ( void ) : Animal ("Cat") ,My_brain(new Brain())
{
    std::cout << "Cat Defeault Constructor called"
    << std::endl;
}

Cat::~Cat ( void )
{
    delete My_brain;
    std::cout << "Cat Destructor called"
    << std::endl;
}

Cat::Cat ( const Cat &ref ) :  Animal(ref)
{
    std::cout << "Cat Copy Constructor called"
    << std::endl;
    My_brain = new Brain(*ref.My_brain);
}

Cat &Cat::operator= ( const Cat &ref )
{
    std::cout << "Cat Copy assignment operator called"
    << std::endl;
    if (this != &ref)
    {
        Animal::operator=(ref);
        delete My_brain;
        My_brain = new Brain (*ref.My_brain);
    }
    return (*this);
}

void Cat::makeSound ( void ) const
{
    std::cout << "Miaow, miaow, miaow, miaow !!"
    << std::endl;
}


// void Cat::setBrainIdea(int index, const std::string& idea)
// {
//     My_brain->setIdea(index, idea);
// }

// std::string Cat::getBrainIdea(int index) const
// {
//     return My_brain->getIdea(index);
// }
