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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>nodes;
        helper(root,nodes);
        return nodes;
    }
    
    void helper(TreeNode* root,vector<int>&nodes){
        if(root!=NULL){
        nodes.push_back(root->val);
        helper(root->left,nodes);
        helper(root->right,nodes);
        }
    }
};