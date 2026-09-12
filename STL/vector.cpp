#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>vec;  
    // 0
    vec.push_back(1);
    vec.push_back(2);
     vec.push_back(3);

    cout << vec.size() <<  endl;  // 3
    cout << vec.capacity() << endl; // 4
    return 0;
}

//  vec.push_back(1); == is used to change the value of vector from 0 to 1 
// this is the property of vector  called size 
// used to add the value 


// size = 3 and capacity = 4 