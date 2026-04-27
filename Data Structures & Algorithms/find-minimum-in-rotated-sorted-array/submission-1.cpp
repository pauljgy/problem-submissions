class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int n = nums.size();

        int l = 0, r = n - 1;

        while (l < r) {
            int mid = (l+r)/2;

            if (r - l <= 1) {
                return min(nums[l], nums[r]);
            }

            // if left is min
            if (nums[l] < nums[mid] && nums[mid] < nums[r]) {
                return nums[l];
            }
            
            if (nums[mid] < nums[r] && nums[r] < nums[l]) {
                r = mid;
                continue;
            } 

            if (nums[r] < nums[l] && nums[l] < nums[mid]) {
                l = mid;
                continue;
            }
        }

        return min(nums[l], nums[r]);
    }
};
