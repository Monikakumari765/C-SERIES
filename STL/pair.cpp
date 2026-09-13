#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
// pair<int,int>p ={3,5}; output 1 5
//pair<string, string > p= {"monika","gourav"};//monika gourav
//pair<int , char> p ={9,'a'}; //9 a

 pair<int,pair<string , int>> p = {1 ,{"mona" ,3}} ;

 cout<<p.first<<endl; //1
 cout<<p.second.first<<endl; //mona 
 cout<<p.second.second<<endl; //3
return 0;

}
// pair<int,pair<string , int>> p = {1 ,{"mona" ,3}} ;
// this is pair inside pair basically we used pair inside pair.

