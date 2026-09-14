#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;

   s.insert(10);
   s.insert(20);
   s.insert(30);
   s.insert(40);
   s.insert(50);

   cout <<s.size() << endl; //5

   for(auto val:s)
   {
    cout << val <<" ";
   }
    cout<<endl;

   
    return 0;

}