#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to reverse a part of the array
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    // Function to rotate the array
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;   // Handle cases where k > n

        //  1: Reverse the entire array
        reverse(nums, 0, n - 1);

        // 2: Reverse the first k elements
        reverse(nums, 0, k - 1);

        //  3: Reverse the remaining elements
        reverse(nums, k, n - 1);
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original Array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    obj.rotate(nums, k);

    cout << "Rotated Array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}