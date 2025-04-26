# include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    Hit_pts = 0;
    Energy_pts = 0;
    Attack_dmg = 0;
    std::cout << "FragTrap Default constructor called"
    << std::endl;
}

FragTrap::FragTrap ( std::string name )
{
    Name = name;
    Hit_pts = 100;
    Energy_pts = 100;
    Attack_dmg = 30;
    std::cout << "FragTrap Modified Constructor called"
    << std::endl;

}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap Destructor called"
    << std::endl;

}

FragTrap::FragTrap( const FragTrap &ref)
{
    std::cout << "FragTrap Copy constructor called"
    << std::endl;
    this->Name = ref.Name;
    this->Hit_pts = ref.Hit_pts;
    this->Energy_pts = ref.Energy_pts;
    this->Attack_dmg = ref.Attack_dmg;

}

FragTrap &FragTrap::operator=( const FragTrap &ref )
{
    std::cout << "FragTrap Copy assignment operator called"
    << std::endl;
    if (this == &ref)
        return(*this);
    this->Name = ref.Name;
    this->Hit_pts = ref.Hit_pts;
    this->Energy_pts = ref.Energy_pts;
    this->Attack_dmg = ref.Attack_dmg;
    return(*this);
}

void FragTrap::attack(const std::string &target)
{
    if (Hit_pts <= 0 || Energy_pts <= 0)
    {
        std::cout << "FragTrap " << Name
                  << " Can not Attack: no energy or already destroyed."
                  << std::endl;
        return;
    }
    Energy_pts--;
    std::cout << "FragTrap " << Name << " attacks " << target
              << " causing " << Attack_dmg << " points of damage!"
              << std::endl;
}


void FragTrap::highFivesGuys ( void )
{
    std::cout << " FragTrap highFive you Guys!!"
    << std::endl;
}