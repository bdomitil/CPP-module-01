#include "Zombie.hpp"

int main()
{
    Zombie *zomb;
    zomb = zombieHorde(5, "Zombie");
    delete [] (zomb); 
    return (0);
}