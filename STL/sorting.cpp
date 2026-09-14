#include<iostream>
using namespace std;
int main(){
  
//   int arr[5] = {1 ,2 ,3 ,4,5 };
//   sort(arr , arr +5);
//   for(int val:arr){
//     cout<<val <<" ";

//   }
//   cout<<endl;
//   return 0;

vector<int> vec { 3,4 ,8 ,5 ,9};

sort(vec.begin() , vec.end(), greater<int>()); // for decending order 

for(int val:vec){
    cout<< val << " ";
}
cout<< endl;
return 0;
//3 4 5  8 9 

}
