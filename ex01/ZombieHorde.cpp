#include "Zombie.hpp"

Zombie *zombieHorde(int N, string name)
{
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].set_name((char)(i + 48)  + (" " + name));
		zombies[i].announce();
	}
	return (zombies);
}