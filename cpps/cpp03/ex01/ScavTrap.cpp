# include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    Hit_pts = 0;
    Energy_pts = 0;
    Attack_dmg = 0;
    std::cout << "ScavTrap Default constructor called"
    << std::endl;
}

ScavTrap::ScavTrap( std::string name ) 
{
    Name = name;
    Hit_pts = 100;
    Energy_pts = 50;
    Attack_dmg = 20;
    std::cout << "ScavTrap Modified Constructor called"
    << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called"
              << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
    std::cout << "ScavTrap Copy constructor called"
    << std::endl;
    this->Name = ref.Name;
    this->Hit_pts = ref.Hit_pts;
    this->Energy_pts = ref.Energy_pts;
    this->Attack_dmg = ref.Attack_dmg;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
    std::cout << "ScavTrap Copy assignment operator called"
    << std::endl;
    if (this == &ref)
        return(*this);
    this->Name = ref.Name;
    this->Hit_pts = ref.Hit_pts;
    this->Energy_pts = ref.Energy_pts;
    this->Attack_dmg = ref.Attack_dmg;
    return(*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (Hit_pts <= 0 || Energy_pts <= 0)
    {
        std::cout << "ScavTrap " << Name
                  << " Can not Attack: no energy or already destroyed."
                  << std::endl;
        return;
    }
    Energy_pts--;
    std::cout << "ScavTrap " << Name << " attacks " << target
              << " causing " << Attack_dmg << " points of damage!"
              << std::endl;
}

void ScavTrap::guardGate ( void )
{
    std::cout << " ScavTrap is now in Gate keeper mode."
    << std::endl;
}

