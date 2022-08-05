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
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int l1 = inorder.size()-1; // LDR
        int l2 = preorder.size()-1; // DLR
        
        if(l1!=l2)
            return NULL;
       map<int,int> hm;
        
        for(int i=0;i<=l1;i++){
    // assign index to inorder arrauy corresponding to hashmap
            hm[inorder[i]] = i; 
        }
        
        return build(inorder,0,l1,preorder,0,l2,hm);
    }
        
     TreeNode* build(vector<int>& inorder,int ios,int l1, vector<int>& preorder,int pos,int l2,map<int,int>& hm) {
        if( pos>l2 ) return NULL; 
// base case size becomes zero no left or right subtree

      //  create node to store root of tree to build tree 
        TreeNode* root = new TreeNode(preorder[pos]);
         
         //find index of that root into inorder array and store
         int inRoot = hm[preorder[pos]];
        // int numleft = inRoot-ios;  // no. of elements are at the left is ( index of root in inorder - index of ios in inorder)  
         
         root->left = build(inorder,ios,inRoot-1,preorder,pos+1,pos+inRoot-ios,hm);
         
         root->right = build(inorder,inRoot+1,l1-1,preorder,pos+inRoot-ios+1,l2,hm);
         // (pass the index of root + 1 ) as ios , upto l1, for right subtree of inoreder
         // (pass pos+numleft,l2-1 )
         
         return root;
     }      
};