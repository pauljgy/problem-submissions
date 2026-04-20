class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int l = 0, r = 0;

        int currentSum = nums[0];

        std::set<int> subarraySizes;

        while (r < n) {
            // compare currentSum to target
            // <, =, >
            if (currentSum < target) {
                r++;
                if (r < n) currentSum += nums[r];
            } else {
                if (l == r) {
                    l++; r++;
                    subarraySizes.insert(1);
                    currentSum = nums[l];
                } else {
                    subarraySizes.insert(r - l + 1);
                    currentSum -= nums[l];
                    l++;
                }
            }
        }

        while (l < n) {
            currentSum -= nums[l];
            if (currentSum >= target) {
                subarraySizes.insert(r - l + 1);
            }
            l++;
        }

        if (subarraySizes.size() == 0)
            return 0;
        else 
            return *std::min_element(subarraySizes.begin(), subarraySizes.end());
    }
};