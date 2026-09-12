#include <iostream>
using namespace std;
int main()
{
    int n = 44;
    // to check if n is positive
    if (n > 0)
    {
        if (n%2==0)
        {
            cout << "positive and even";
        }
        else
        {
            cout << "positive and odd";
        }
    }
    else if (n == 0)
    {
        cout << "the number is zero";
    }
    else
    {
        cout << "the number is negative ";
    }
    return 0;
}