#include<iostream>
#include<queue>
using namespace std;
int main()
{
     // priority_queue<int>  q;  // output for decreasing order 49 20 13 11
      priority_queue<int , vector<int> , greater<int>>  q; //  for increasing order 11 13 20 49

    q.push(11);
    q.push(20);
    q.push(13);
    q.push(49);

    while(!q.empty())
    {
        cout<< q. top()<< " ";
        q.pop();
    }

    cout<<endl;
    return 0;

}