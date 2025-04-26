# include "Cat.hpp"


Cat::Cat ( void ) : Animal ("Cat")
{
    std::cout << "Cat Defeault Constructor called"
    << std::endl;
}

Cat::~Cat ( void )
{
    std::cout << "Cat Destructor called"
    << std::endl;
}

Cat::Cat ( const Cat &ref )
{
    std::cout << "Cat Copy Constructor called"
    << std::endl;
    type = ref.type;
}

Cat &Cat::operator= ( const Cat &ref )
{
    std::cout << "Cat Copy assignment operator called"
    << std::endl;
    if (this != &ref)
        type = ref.type;
    return (*this);
}

void Cat::makeSound ( void ) const
{
    std::cout << "Miaow, miaow, miaow, miaow !!"
    << std::endl;
}
