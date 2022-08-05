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
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int l1 = inorder.size()-1;
        int l2 = postorder.size()-1;
        
        if(l1!=l2)
            return NULL;
       map<int,int> hm;
        
        for(int i=0;i<=l1;i++){
    // assign index to inorder arrauy corresponding to hashmap
            hm[inorder[i]] = i; 
        }
        
        return build(inorder,0,l1,postorder,0,l2,hm);
        
    }
    
    
     TreeNode* build(vector<int>& inorder,int ios,int l1, vector<int>& postorder,int pos,int l2,map<int,int>& hm) {
        if(pos>l2 || ios>l1) return NULL; 
// base case size becomes zero no left or right subtree

      //  create node to store root of tree to build tree 
        TreeNode* root = new TreeNode(postorder[l2]);
         
         //find index of that root into inorder array and store
         int inRoot = hm[postorder[l2]];
         int numleft = inRoot - ios;  // no. of elements are at the left is ( index of root in inorder - index of ios in inorder)
         
         // left subtree call 
          //   ios       (inRoot)  --- check of left subtree similiarly passing "ios as starting" and inRoot-1 as ending for next call
         // eg: 0   1   2   3   4   5
         ///.   40  20  50  10  60 30 -- inorder
         ///    40  50  20  60  30  10 -- postorder. ( 10 is root)
         //     pos = as starting  ,  and postorder ending as = pos +leftelement -1  
         
         root->left = build(inorder,ios,inRoot-1,postorder,pos,pos+numleft-1,hm);
         
         root->right = build(inorder,inRoot+1,l1,postorder,pos+numleft,l2-1,hm);
         // (pass the index of root + 1 ) as ios , upto l1, for right subtree of inoreder
         // (pass pos+numleft,l2-1 )
         
         return root;
     }      
};