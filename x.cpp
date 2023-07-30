#include <iostream>
#include <vector>

using namespace std;

int longestArithmeticSubarray(const vector<int>& nums) {
    int n = nums.size();
    if (n <= 1)
        return n;

    int longest = 2; // Minimum length of an arithmetic subarray is 2
    int current = 2; // Current length of the arithmetic subarray
    int diff = nums[1] - nums[0]; // Current common difference

    for (int i = 2; i < n; ++i) {
        if (nums[i] - nums[i - 1] == diff) {
            current++;
            longest = max(longest, current);
        } else {
            current = 2;
            diff = nums[i] - nums[i - 1];
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {10, 7, 4, 6, 8, 10,11}; // Example input array
    int result = longestArithmeticSubarray(nums);
    cout << "Longest continuous arithmetic subarray length: " << result << endl;
    return 0;
}
