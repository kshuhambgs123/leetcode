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
    int curr = 0;
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        return helper(root,0);
        
    }
    int helper(TreeNode* root,int curr){
        if(root==NULL){
            return 0;
        }
        curr = curr*10 + root->val;
        if(!root->left && !root->right){
            return curr;
        }
        return helper(root->left,curr) + helper(root->right,curr);
    }
};