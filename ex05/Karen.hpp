#include <iostream>

typedef std::string string;

class Karen
{
private :
    string _logs[4];
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
    int check_level(string);
public :
    void complain(string level);
    Karen();
};