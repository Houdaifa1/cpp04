# include "ClapTrap.hpp"
# include "FragTrap.hpp"


int main ()
{

    std::cout << "===== Creating FragTrap =====" << std::endl;
    FragTrap ft("Fraggy");

    std::cout << "\n===== Using FragTrap Methods =====" << std::endl;
    ft.attack("Target Dummy");
    ft.takeDamage(20);
    ft.beRepaired(10);
    ft.highFivesGuys();

    std::cout << "\n===== Copy Construction =====" << std::endl;
    FragTrap ftCopy(ft);

    std::cout << "\n===== Assignment Operator =====" << std::endl;
    FragTrap ftAssign;
    ftAssign = ft;

    std::cout << "\n===== Destruction Sequence =====" << std::endl;
    return 0;

}