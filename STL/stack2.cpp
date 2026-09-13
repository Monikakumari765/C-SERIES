#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);

  stack<int> s2;

  s2.swap(s);

  cout<< "size is :" << s.size() <<endl; //0
  cout<< "size is :" << s2.size() <<endl; //3 

    return 0;
}