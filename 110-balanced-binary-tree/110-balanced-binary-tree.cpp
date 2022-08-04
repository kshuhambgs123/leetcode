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
    bool res; // SC = O(Ht Of tree) tc : O(n)
    
    int ht(TreeNode* root){
       int ans1 = 0,ans2 = 0;
        if(root==NULL)
            return 0;
        if(!res) // if Answer is already False then return it.
            return 0;
        ans1 = ht(root->left);
        ans2 = ht(root->right);
        
        if(abs(ans1-ans2) > 1){
            res = false;
        }
        return 1 + max(ans1, ans2);
    }
    
    bool isBalanced(TreeNode* root) {
        res = true;
        int tmp = ht(root);
        return res;
    }
      
};