#include <iostream>
using namespace std;
int main()
{
    int age = 18;
    if (age < 13)
    {
        cout << "child";
    }
    else if (age >= 1 and age <= 18)
    {
        cout << "growing age" << endl;
    }
    else
    {
        cout << "adult";
    }
    return 0;
}