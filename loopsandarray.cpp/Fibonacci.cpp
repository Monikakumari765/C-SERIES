#include <iostream>
using namespace std;

int main() {
    int a=0,b=1;
    for(int i=0;i<8;i++) {
        cout << a << " ";
        int c=a+b;
        a=b; b=c;
    }
}