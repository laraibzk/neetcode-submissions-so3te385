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
    int maxDepth(TreeNode* root) {
        // if(root == nullptr) 
        //     return 0;
        // int max_depth = 1+max(maxDepth(root->left), maxDepth(root->right));
        // return max_depth;
        stack<pair<TreeNode* , int>> stack;
        stack.push({root,1 });
        int res=0;

        while(!stack.empty()) {
            pair<TreeNode*, int> current = stack.top();
            stack.pop();
            TreeNode* node = current.first;
            int depth = current.second;
            if(node != nullptr) {
                res = max(depth, res);
                stack.push({node->left, depth+1});
                stack.push({node->right, depth+1});
            }
        }
        return res;
    }
};
