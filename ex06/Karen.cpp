#include "Karen.hpp"

Karen :: Karen ()
{
	_logs[0] = "DEBUG";
	_logs[1] = "ERROR";
	_logs[2] = "WARNING";
	_logs[3] = "INFO";
}

void Karen :: _info (void)
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Karen :: _debug (void)
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen :: _warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void Karen :: _error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int Karen :: check_level(string log)
{    
	int i;
	for (i = 0; i < 4; i++)
	{
		if (_logs[i] == log)
			return (i);
	}
	return (i);
}

void Karen :: complain(string level)
{
    void (Karen :: *foos[4])() = {&Karen :: _debug, &Karen :: _error, \
									&Karen :: _warning, &Karen ::_info};
	int log = check_level(level);
	switch (log)  
 	{
		 case 1 :
		 {
			 (this->*foos[log])();
			 log++;
		 }
		 case 2 :
		 {
			 (this->*foos[log])();
			 break;
		 }
		 case 0  :
		 {
		 	(this->*foos[log])();
			log++;
		 }
		case 3 :
			{
				(this->*foos[log])();
				break;
			}
		default :
			std::cout << "Unknown complaining " << std::endl;
	}
	// (this->*foos[check_level(level)])();
}