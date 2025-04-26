# include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal ( void )
{
    std::cout << "WrongAnimal Defeault Constructor called"
    << std::endl;
}

WrongAnimal::WrongAnimal ( std::string animal_type )
{
    type = animal_type;
    std::cout << "WrongAnimal Modified Constructor called"
    << std::endl;
}

WrongAnimal::~WrongAnimal ( void )
{
    std::cout << "WrongAnimal Destructor called"
    << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal &ref )
{
    std::cout << "WrongAnimal Copy Constructor called"
    << std::endl;
    type = ref.type;
    
}

WrongAnimal &WrongAnimal::operator= ( const WrongAnimal &ref )
{
    std::cout << "Animal Copy assignment operator called"
    << std::endl;
    if (this != &ref)
        type = ref.type;
    return (*this);
}

void WrongAnimal::makeSound ( void ) const
{
    std::cout << "Animal!!"
    << std::endl;
}


std::string WrongAnimal::getType( void ) const { return (type); }