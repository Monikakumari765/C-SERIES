#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return left;
    }
};

int main() {
    Solution obj;

    // Test Case
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << "Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Target: " << target << endl;

    int result = obj.searchInsert(nums, target);

    cout << "Search Insert Position: " << result << endl;

    return 0;
}