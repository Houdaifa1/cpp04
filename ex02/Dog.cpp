# include "Dog.hpp"


Dog::Dog ( void ) : Animal ("Dog"), My_brain(new Brain())
{
    std::cout << "Dog Defeault Constructor called"
    << std::endl;
}

Dog::~Dog ( void )
{
    delete My_brain;
    std::cout << "Dog Destructor called"
    << std::endl;
}

Dog::Dog ( const Dog &ref ) : Animal(ref)
{
    std::cout << "Dog Copy Constructor called"
    << std::endl;
    My_brain = new Brain(*ref.My_brain);
}

Dog &Dog::operator= ( const Dog &ref )
{
    std::cout << "Dog Copy assignment operator called"
    << std::endl;
    if (this != &ref)
    {
        Animal::operator=(ref);
        delete My_brain;
        My_brain = new Brain (*ref.My_brain);
    }
    return (*this);
}

void Dog::makeSound ( void ) const
{
    std::cout << "Woof, woof, woof, woof !!"
    << std::endl;
}

// void Dog::setBrainIdea(int index, const std::string& idea)
// {
//     My_brain->setIdea(index, idea);
// }

// std::string Dog::getBrainIdea(int index) const
// {
//     return My_brain->getIdea(index);
// }
