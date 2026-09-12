#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<int>vec = {1,2,3,4,5}; // output is 1 2 3 4 5

//vector<int> vec(4,10); // 4 is the size and 10 is the value 
//also used in dynamic programming 

vector<int> vec1 = {1,2,3,4,5};
vector<int>vec2(vec1);

for(int val:vec1){
    cout<< val << " ";
}
    cout << endl;
    return 0;

}
