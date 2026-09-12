#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            swapped = false;
            int next = arr[j + 1];
            int temp = arr[j];
            arr[j] = next;
            next = temp;
            swapped = true;
        }

        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {64, 34, 5, 12, 22, 11, 90};

    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}