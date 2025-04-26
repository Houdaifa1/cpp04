# include "WrongCat.hpp"


WrongCat::WrongCat ( void ) : WrongAnimal ("Cat")
{
    std::cout << "WrongCat Defeault Constructor called"
    << std::endl;
}

WrongCat::~WrongCat ( void )
{
    std::cout << "WrongCat Destructor called"
    << std::endl;
}

WrongCat::WrongCat ( const WrongCat &ref )
{
    std::cout << "WrongCat Copy Constructor called"
    << std::endl;
    type = ref.type;
}

WrongCat &WrongCat::operator= ( const WrongCat &ref )
{
    std::cout << "WrongCat Copy assignment operator called"
    << std::endl;
    if (this != &ref)
        type = ref.type;
    return (*this);
}

void WrongCat::makeSound ( void ) const
{
    std::cout << "Miaow, miaow, miaow, miaow !!"
    << std::endl;
}
