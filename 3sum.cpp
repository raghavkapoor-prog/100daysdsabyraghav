#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();

    // Sorting the array
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; ++i) {
        // Skip duplicate values for the fixed element
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int target = -nums[i];
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum < target) {
                // Move the left pointer to the right to increase the sum
                left++;
            } else if (sum > target) {
                // Move the right pointer to the left to decrease the sum
                right--;
            } else {
                // Found a triplet whose sum is zero
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicate values for the left and right pointers
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                // Move both pointers to find new triplets
                left++;
                right--;
            }
        }
    }

    return result;
}
