class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            int target = nums[i];

            if (freq.count(target))
                return true;
            else
                freq[target] = 1;
        }

        return false;
    }
};