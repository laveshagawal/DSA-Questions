class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int low = INT_MAX;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[i] <= nums[j]) {
                low = min(low, nums[i]);
                break;
            }
            if (nums[i] <= nums[mid]) {
                low = min(low, nums[i]);
                i = mid + 1;
            } else {
                low = min(low, nums[mid]);
                j = mid - 1;
            }
        }
        return low;
    }
};