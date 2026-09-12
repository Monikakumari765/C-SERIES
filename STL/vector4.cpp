#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> vec = {1,2,3,4,5};
//vec.erase(vec.begin()); // covering erase  output is 2 3 4 5
//vec.erase(vec.begin() + 2); // output is 1 2 4 5

//vec.erase ( vec.begin() + 1 , vec.begin() + 3);

//vec.insert (vec.begin() + 2, 100); // 1  2 100 3 4 5 
  vec.clear();
  cout << "is empty :" << vec.empty() << endl;
  //cout << "capacity" << vec.capacity() << endl;

for(int val:vec){
    cout<< val << " ";
}
    cout << endl;
    return 0;

}
