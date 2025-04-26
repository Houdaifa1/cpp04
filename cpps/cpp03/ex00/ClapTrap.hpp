# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private :

        std::string     Name;
        unsigned int    Hit_pts;
        unsigned int    Energy_pts;
        unsigned int    Attack_dmg;

    public :

        ClapTrap( void );
        ClapTrap( std::string Name);
        ~ClapTrap ( void );
        ClapTrap( const ClapTrap &ref);
        ClapTrap &operator=( const ClapTrap &ref);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

# endif