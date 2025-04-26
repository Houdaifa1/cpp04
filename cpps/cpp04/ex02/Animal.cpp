# include "Animal.hpp"


Animal::Animal ( void )
{
    std::cout << "Animal Defeault Constructor called"
    << std::endl;
}

Animal::Animal ( std::string animal_type )
{
    type = animal_type;
    std::cout << "Animal Modified Constructor called"
    << std::endl;
}

Animal::~Animal ( void )
{
    std::cout << "Animal Destructor called"
    << std::endl;
}

Animal::Animal ( const Animal &ref )
{
    std::cout << "Animal Copy Constructor called"
    << std::endl;
    type = ref.type;
}

Animal &Animal::operator= ( const Animal &ref )
{
    std::cout << "Animal Copy assignment operator called"
    << std::endl;
    if (this != &ref)
        type = ref.type;
    return (*this);
}


std::string Animal::getType( void ) const { return (type); }