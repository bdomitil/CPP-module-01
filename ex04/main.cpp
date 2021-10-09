#include <iostream>
#include <cstring>	
#include <fstream>

typedef std::string string;



int main(int argc, char **argv)
{
	if (argc != 4)
		{
			std::cout << "please use :  <filename>  <what> <for what> " << std::endl;
			exit (1);
		}
	std::ifstream read_stream(argv[1]);
	if (read_stream.is_open())
	{
		string buff;
		string new_filename = argv[1];
		new_filename.append(".replace");
		std::ofstream write_stream;
		write_stream.open((new_filename), std::ios::out );
		if (write_stream.is_open())
		{
			while (read_stream >>  buff)
			{
				
				if (buff == argv[2])
					write_stream << argv[3];
				else
					write_stream << buff;
			}
			write_stream << std::endl;
			write_stream.close();
			read_stream.close();
		}
		else 
		{
			std::cout << "unable to open file" << std::endl;
			exit(1);

		}
	}
	else
		std::cout << "unable to read file" << std::endl;

}