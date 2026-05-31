#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,20,30,40,50};
    int key,i;
    cout<<"enter element to search:";
    cin>>key;

    for(i=0;i<5;i++){
        if(a[i]==key){
            cout<<"element found at position "<<i+1;
            return 0;
        }
    }
    cout<<"element not found";
    return 0;
}