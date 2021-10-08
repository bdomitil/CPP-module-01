#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

typedef std::string string;

class Weapon 
{
private :
	string _type;
public :
	string	getType();
	void	setType(string type);
	Weapon(string Weapon_type);
	Weapon();
};

#endif