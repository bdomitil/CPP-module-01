#include "HumanB.hpp"

HumanB :: HumanB() { };

HumanB :: HumanB(string name) {
    _name = name;
}

void HumanB :: setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB :: atack()
{
    if (_weapon)
        std::cout << _name << "atacks with his " << _weapon->getType() << std::endl;
    else
        std::cout << _name << "has no weapon to attack with" << std::endl;
}