#include "Weapon.hpp"

void Weapon:: setType(string type) {_type = type; }

string Weapon :: getType (void) { return (_type); }

Weapon :: Weapon (){};
Weapon :: Weapon (string weapon_type){ setType(weapon_type); };