#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int target = 3;

    int n = 5;

    for (int i = n - 1; i >= 0; i--)
     {
        if (arr[i] == target)
         {
            cout << "Element at index: " << i;
            break;
        }
    }

    return 0;
}