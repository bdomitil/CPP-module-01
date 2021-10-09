#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Just 1 arg is valid for using it" << std::endl;
		exit(1);
	}
	Karen studipKaren;
	studipKaren.complain(argv[1]);
	return (0);   
}