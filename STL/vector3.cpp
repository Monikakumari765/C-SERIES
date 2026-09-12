#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<int>vec = {1,2,3,4,5}; // output is 1 2 3 4 5

vector<int> vec(4,10); // 4 is the size and 10 is the value 

for(int val:vec){
    cout<< val << " ";
}
    cout << endl;
    return 0;

}
