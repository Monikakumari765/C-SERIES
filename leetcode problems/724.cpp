#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;

    // Calculate total sum
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;

    // Find pivot index
    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int result = pivotIndex(nums);

    cout << "Pivot Index: " << result << endl;

    return 0;
}