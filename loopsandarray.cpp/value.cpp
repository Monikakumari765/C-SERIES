#include <iostream>
#include <string>
void printstring(std::string str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string mystring = "hello,GFG!";
    printstring(mystring);
    return 0;
}