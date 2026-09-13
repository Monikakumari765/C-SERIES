#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string , int > m ;
    m["tv"] = 100;
    m["laptop"] = 50;
    m["remote"] = 46;

    for(auto p:m){
        cout<< p.first << " ";
        cout<< p.second << " ";
        cout<< endl;

    }
    return 0;
}