#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution obj;

    // Test Case
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    cout << "Original String: ";
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;

    obj.reverseString(s);

    cout << "Reversed String: ";
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}