#include <iostream>
#include <string>

typedef std::string string;

class Zombie 
{
private :
	string _name;
public :
	void announce();
	string get_name();
	void set_name(string _name);
	Zombie();
	Zombie(string name);
	~Zombie();

};

Zombie *newZombie(string name);
void randomChump(string name);
