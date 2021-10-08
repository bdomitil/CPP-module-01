#include "Zombie.hpp"

int main()
{
    Zombie *zombieheap;
    zombieheap  = newZombie("heapZombie");
    Zombie zombie("rayan");
    randomChump("chumpZombie");
    delete(zombieheap);
    return (0);
}