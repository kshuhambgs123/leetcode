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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        helper(root,d);
        return d;
    }
    int helper(TreeNode* root,int &d){
        if(root==NULL)
            return 0;
        int l = helper(root->left,d);
        int r = helper(root->right,d);
        d = max(d,(l+r));
        return 1+max(l,r);
    }
};