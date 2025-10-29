#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() const
{
    if(weapon)
        std::cout << YELLOW << name << " attacks with their " << weapon ->getType() << RESET << std::endl;
    else
        std::cout << RED << name << " has no weapon to attack with!" << RESET << std::endl;
}