# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public :

        ScavTrap( void );
        ScavTrap (std::string name);
        ~ScavTrap ( void );
        ScavTrap( const ScavTrap &ref);
        ScavTrap &operator=( const ScavTrap &ref);
        void guardGate();
        void attack(const std::string& target);


};

# endif