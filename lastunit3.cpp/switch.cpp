#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "enter your choice from1,2,3,4\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "your choice is 1\n";
    }
    case 2:
    {
        cout << "your choice is 2\n";
    }
    case 3:
    {
        cout << "your choice is 3\n";
    }
    case 4:
  {
        cout << "your choice is 4\n";
    }
    default:
    {
        cout << "you have enter the wrong value";
        break;
    }
    }
}