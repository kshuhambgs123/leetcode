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
    
    int depth(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+max(depth(root->left),depth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL)
            return true;
    queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            int l = depth(curr->left);
            int r = depth(curr->right);
            
            if(abs(l-r)>1)
                return false;
            
            if(curr->left!=NULL)
                q.push(curr->left);
            
            if(curr->right!=NULL)
                q.push(curr->right);   
        }
        return true; 
    }
};