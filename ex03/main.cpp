
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.atack();
		club.setType("some other type of club");
		bob.atack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.atack();
		jim.setWeapon(club);
		jim.atack();
		club.setType("some other type of club");
		jim.atack();
	}
	return (0);
}