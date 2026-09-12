#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);  // similar to push back 
    vec.pop_back();

    cout <<  " value at index 2 is " << vec[2] << endl;

    cout << "front" << vec.front() << endl;
     cout << "back" << vec.back() << endl;


    // for( int  val : vec){
    //     cout << val << " ";
    // }
    cout << endl;


    //  cout << vec.size() << endl; // 3
    //  cout << vec.capacity() << endl; // 4    

    return 0;
}
