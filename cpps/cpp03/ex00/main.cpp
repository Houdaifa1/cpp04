# include "ClapTrap.hpp"



int main ()
{

    ClapTrap test("Hdrahm");

    test.attack("test"); // energy--, ; 9
    test.takeDamage (5);   // hit_point-=5  ; 5 
    test.beRepaired (2); // hit_pointd += 2; 7
}