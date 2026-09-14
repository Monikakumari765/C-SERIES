#include<iostream>
using namespace std;
int main(){
    vector<int> vec { 3,4 ,8 ,5 ,9};

sort(vec.begin() , vec.end());

for(int val:vec){
    cout<< val << " ";
}
cout<< endl;
return 0;


}