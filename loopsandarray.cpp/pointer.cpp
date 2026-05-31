#include <iostream>
#include <string>

void printstring(const std::string *str)
{
std::cout<< *str << std::endl;
}
int main()
{
    std::string mystring = "this is pss by pointer";
    printstring(&mystring);

    return 0;
}