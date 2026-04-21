/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> result;

        std::vector<int> traversal;
        std::deque<TreeNode *> q;

        if (!root) return {};

        q.push_back(root);

        while (!q.empty()) {
            int levelSize = q.size();  // snapshot current level's count
            
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop_front();
                
                traversal.push_back(node->val);
                if (node->left)  q.push_back(node->left);
                if (node->right) q.push_back(node->right);
            }
            
            result.push_back(traversal);
            traversal.clear();
        }
        return result;
    }
};
