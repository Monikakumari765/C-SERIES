#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 7, 8, 12, 22, 25, 30};
    int n = 7;

    int i = 0;
    int j = 1;

    bool sorted = true;

    while (j < n) {

        if (arr[i] > arr[j]) {
            sorted = false;
            break;
        }

        i++;
        j++;
    }

    if (sorted)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}