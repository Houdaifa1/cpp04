# include "ClapTrap.hpp"
# include "ScavTrap.hpp"



int main ()
{

    std::cout << "===== Creating ScavTrap =====" << std::endl;
    ScavTrap ft("Fraggy");

    std::cout << "\n===== Using ScavTrap Methods =====" << std::endl;
    ft.attack("Target Dummy");
    ft.takeDamage(20);
    ft.beRepaired(10);
    ft.guardGate();

    std::cout << "\n===== Copy Construction =====" << std::endl;
    ScavTrap ftCopy(ft);

    std::cout << "\n===== Assignment Operator =====" << std::endl;
    ScavTrap ftAssign;
    ftAssign = ft;

    std::cout << "\n===== Destruction Sequence =====" << std::endl;
    return 0;

}