#include <iostream>
typedef std::string string;
int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    std::cout << "address of str = " << &str << std::endl;
    std::cout << "address of str = " << stringPTR << std::endl;
    std::cout << "address of str = " << &stringREF << std::endl;
    std::cout << "________________________________________" << std::endl;
    std::cout << "string content = " << str << std::endl;
    std::cout << "stringPTR content = " << *stringPTR << std::endl;
    std::cout << "stringREF content = " << stringREF << std::endl;


    return (0);
}