#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{

  list<int> l ={1,2,3,4,5};
  //l.erase(l.begin());// to erase element from front 
  //l.clear(); // to clear all the element 
   l.pop_back();

  for( int val:l){
    cout<< val <<" ";
  }
   cout <<endl;

    return 0;

}