#include "Weapon.hpp"

class HumanA
{
private:
    string _name;
    Weapon &_weapon;
public :
    void setName(string name);
    string getName();
    HumanA(string name, Weapon &weapon);
    void atack();
};