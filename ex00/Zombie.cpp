#include "Zombie.hpp"

void Zombie:: set_name(string _name)
{
    this->_name = _name;
    return ;
}

string Zombie :: get_name(void)
{

    return (_name);
}
Zombie :: ~ Zombie ()
{
    std::cout << get_name() << " has died" << std::endl;
}
Zombie :: Zombie ()
{
    announce();
}

Zombie :: Zombie (string name)
{
    _name = name;
    announce();
}


void Zombie:: announce(void)
{
    string voice = " BraiiiiiiinnnzzzZ...";
    
    if (get_name().size() > 0)
        std::cout << get_name() << voice << std::endl;
    else
        std::cout << voice << std::endl;
}