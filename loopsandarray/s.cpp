#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,2};
    {
        for(int i=0;i<4;i++){
            if(arr[i]==4)
            {
                cout<<i;
                break;
            }
        }
    }
}