#include <iostream>
using namespace std;
int main()
{
    double numbers[] = {7, 5, 6, 12, 35, 27};
    double sum = 0;
    double count = 0;
    double average;
    cout << "the number are:";
    for (const double &n : numbers)
    {
        cout << n << "  ";
        sum+=sum;
    }
    cout << "/n their sum =" << sum << endl;
    average = sum / count;
    cout << "their average =" << average << endl;

    return 0;
}