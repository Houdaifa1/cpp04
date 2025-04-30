# include "Animal.hpp"


Animal::Animal ( void )
{
    std::cout << "Animal Defeault Constructor called"
    << std::endl;
}

Animal::Animal ( const std::string &animal_type )
{
    type = animal_type;
    std::cout << "Animal Parameterized Constructor called"
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

void Animal::makeSound ( void ) const
{
    std::cout << "Animal!!"
    << std::endl;
}


std::string Animal::getType( void ) const { return (type); }