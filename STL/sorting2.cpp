#include<iostream>
using namespace std;
bool copmparator(pair<int, int >p1 , pair<int, int >p2){
    if(p1.second< p2.second) return true;
     if(p1.second > p2.second) return false;

     if(p1.first<p2.second)return true;
     else return false; // for sorting both
}

int main(){
    vector<pair<int ,int>> vec= {{1,2},{3,4},{5,6},{7,8}};

sort(vec.begin() , vec.end());

for(auto p:vec){
    cout<< p.first << " " <<p.second << endl;
}

return 0;
//1 2
// 3 4
// 5 6
// 7 8 we get this value on the basics of thr first value 

}