#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1); // emplace_back give us the same result 
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    l.pop_back();// to delete element form back
    l.pop_front(); // to delete element form front 

    //to print the element s we create for each loop
   for(int val:l){
    cout<< val << " " ;
   }
   cout << endl;
    return 0;
}