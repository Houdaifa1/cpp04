# include "Dog.hpp"


Dog::Dog ( void ) : Animal ("Dog")
{
    std::cout << "Dog Defeault Constructor called"
    << std::endl;
}

Dog::~Dog ( void )
{
    std::cout << "Dog Destructor called"
    << std::endl;
}

Dog::Dog ( const Dog &ref )
{
    std::cout << "Dog Copy Constructor called"
    << std::endl;
    type = ref.type;
}

Dog &Dog::operator= ( const Dog &ref )
{
    std::cout << "Dog Copy assignment operator called"
    << std::endl;
    if (this != &ref)
        type = ref.type;
    return (*this);
}

void Dog::makeSound ( void ) const
{
    std::cout << "Woof, woof, woof, woof !!"
    << std::endl;
}
