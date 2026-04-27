class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        if (n == 2) {
            return {nums[1], nums[0]};
        }

        std::vector<int> left(n, 0);
        std::vector<int> right(n, 0);

        std::vector<int> output(n, 0);

        left[0] = 1;
        left[1] = nums[0];
        for (int i = 2; i < n; i++) {
            left[i] = left[i-1] * nums[i-1];
        }

        right[n-1] = 1;
        right[n-2] = nums[n-1];
        for (int i = n-3; i >= 0; i--) {
            right[i] = right[i+1] * nums[i+1];
        }

        for (int i = 0; i < n; i++) {
            output[i] = left[i] * right[i];
        }

        for (auto &i : left) std::cout << i << " ";
        std::cout << std::endl;
        for (auto &i : right) std::cout << i << " ";
        std::cout << std::endl;
        
        return output;
    }
};
