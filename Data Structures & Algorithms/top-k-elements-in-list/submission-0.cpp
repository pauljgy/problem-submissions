class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_to_frequency;

        for (int num : nums)
            num_to_frequency[num]++;
        
        // group by frequency
        unordered_map<int, vector<int>> freq_to_num;

        for (const auto& [k, v] : num_to_frequency) {
            freq_to_num[v].push_back(k);
        }

        vector<int> ret;

        for (int i = nums.size(); i > 0; i--) {
            if (ret.size() >= k)
                return ret;
            
            for (int key : freq_to_num[i]) {
                ret.push_back(key);
            }
        }

        return ret;
    }
};
