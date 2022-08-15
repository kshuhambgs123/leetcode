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
    TreeNode* invertTree(TreeNode* root) {
         std::stack<TreeNode*> s;
         s.push(root);
    
        while (!s.empty()) {
            TreeNode* p = s.top();
            s.pop();
            if (p) {
                s.push(p->left);
                s.push(p->right);
                std::swap(p->left, p->right);
            }
        }
        return root;
    }
};
