#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
     //multiset<int>s;
  
     unordered_set<int> s; //50 40 30 20 10

   s.insert(10);
   s.insert(20);
   s.insert(30);
   s.insert(40);
   s.insert(50);


   s.insert(10);
   s.insert(20);
   s.insert(30);

   for(auto val:s)
   {
    cout << val <<" ";
   }
    cout<<endl;

   
    return 0;

}