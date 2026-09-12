#include<iostream>
using namespace std;

int roll;
int age;
int marks;

void printdetails()
{
    cout << "roll=" << roll << "\n";
    cout << "age=" << age << "\n";
    cout << "marks=" << marks << "\n";
}
int main()
{
    roll = 1;
    age = 18;
    marks = 90;

    printdetails();

    return 0;
}