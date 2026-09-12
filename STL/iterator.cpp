#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec ={1,2,3,4,5};
    // cout<< "vec.begin:" << *(vec.begin()) << endl;

    cout<< " vec.end:" << *(vec.end()) << endl;

return 0;

}


//we use begin in iterator for the first element in the array.
//when we use end it soes not give us thelast value because end is not mean to give the last value in the array 
