#include "Weapon.hpp"

class HumanB
{
private:
    string _name;
    Weapon *_weapon;
public :
    void setName(string name);
    string getName();
    HumanB();
    HumanB(string name);
    void atack();
    void setWeapon(Weapon &weapon);
};