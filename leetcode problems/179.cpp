#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Custom comparator
    static bool cmp(string &a, string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {

        vector<string> arr;

        // Convert integers to strings
        for (int x : nums) {
            arr.push_back(to_string(x));
        }

        // Sort according to custom comparator
        sort(arr.begin(), arr.end(), cmp);

        string ans = "";

        // Concatenate all strings
        for (string &s : arr) {
            ans += s;
        }

        // If the largest number is 0, return "0"
        if (ans[0] == '0')
            return "0";

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {3, 30, 34, 5, 9};

    cout << "Input: ";
    for (int num : nums) {
        cout << num << " ";
    }

    cout << endl;

    string result = obj.largestNumber(nums);

    cout << "Largest Number: " << result << endl;

    return 0;
}