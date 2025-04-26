#include "ClapTrap.hpp"


ClapTrap::ClapTrap( void ) : Hit_pts(0), 
        Energy_pts(0), Attack_dmg(0)
{
    std::cout << "ClapTrap Default constructor called"
    << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name),
    Hit_pts(10), Energy_pts(10), Attack_dmg(0)
{
    std::cout << "ClapTrap Modified Constructor called"
    << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called"
              << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
    std::cout << "ClapTrap Copy constructor called"
    << std::endl;
    this->Name = ref.Name;
    this->Hit_pts = ref.Hit_pts;
    this->Energy_pts = ref.Energy_pts;
    this->Attack_dmg = ref.Attack_dmg;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
    std::cout << "ClapTrap Copy assignment operator called"
    << std::endl;
    if (this == &ref)
        return(*this);
    this->Name = ref.Name;
    this->Hit_pts = ref.Hit_pts;
    this->Energy_pts = ref.Energy_pts;
    this->Attack_dmg = ref.Attack_dmg;
    return(*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (Hit_pts <= 0 || Energy_pts <= 0)
    {
        std::cout << "ClapTrap " << Name
                  << " Can not Attack: no energy or already destroyed."
                  << std::endl;
        return;
    }
    Energy_pts--;
    std::cout << "ClapTrap " << Name << " attacks " << target
              << " causing " << Attack_dmg << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_pts == 0)
    {
        std::cout << "Already been destroyed"
                  << std::endl;
        return;
    }
    if (amount > Hit_pts)
        Hit_pts = 0;
    else
        Hit_pts -= amount;
    std::cout << Name << " takes " << amount
              << " points of damage, now at " << Hit_pts << " HP"
              << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_pts <= 0 || Energy_pts <= 0)
    {
        std::cout << "Can not be Repaired"
                  << std::endl;
        return;
    }
    Energy_pts--;
    Hit_pts += amount;
    std::cout << Name << " repairs itself for "
              << amount << " hit points, now at " << Hit_pts << " HP"
              << std::endl;
}
