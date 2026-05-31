#include <iostream>
using namespace std;
int main()
{
    int age = 17;
    if (age >= 18)
    {
        goto not_eligible;
    }
    else
    {
        cout << "you can vote!";
    }
    not_eligible:

    cout << "you are not eligible to vote!\n";
    return 0;
}