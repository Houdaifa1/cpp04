#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
    // const Animal *meta = new Animal();
    const Animal *j = new Dog();
    std::cout << j->getType() << " " << std::endl;

    j->makeSound();
    // meta->makeSound();

    return 0;
}