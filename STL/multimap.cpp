#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<string , int > m ;
   m.emplace("mobile" , 100);
   m.emplace("mobile" , 100);
   m.emplace("mobile" , 100);
   m.emplace("mobile" , 100);
   
   m.erase(m.find ("mobile"));


    for(auto p:m){
        cout<< p.first << " ";
        cout<< p.second << endl;

    }

    return 0;
}