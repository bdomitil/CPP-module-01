#include "HumanA.hpp"

HumanA :: HumanA(string name, Weapon &weapon) : _name(name), _weapon(weapon)  {
    this->_name = name;
    this->_weapon = weapon;
}

void HumanA :: atack()
{
    std::cout << _name << "atacks with his " << _weapon.getType() << std::endl;
}