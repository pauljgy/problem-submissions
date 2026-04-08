class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, vector<int>> indices;

        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            indices[current].push_back(i);
        }

        for (const auto& [k, v] : indices) {
            cout << k << ": ";
            for (int val : v)
                cout << val << " ";
            cout << endl;
        }
    
        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];

            if (current == target/2 && indices[current].size() >= 2)
                return {indices[current][0], indices[current][1]};
            
            if (target - current != current && indices.count(target - current))
                return {indices[current][0], indices[target-current][0]};
        }
    }
};
