#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string , int > m ;
    m["tv"] = 100;
    m["laptop"] = 50;
    m["remote"] = 46; // always in shorted in ascending order 


    //m.insert({"camera", 9}); // camera 9
    m.emplace("camera" , 9); //camera 9
   m.erase("tv"); // to earase completely 

    for(auto p:m){
        cout<< p.first << " ";
        cout<< p.second << " ";
        cout<< endl;

    }
    cout << "cout = " <<m.count("laptop") <<endl;// represent the no of that value which is present 

    return 0;
}