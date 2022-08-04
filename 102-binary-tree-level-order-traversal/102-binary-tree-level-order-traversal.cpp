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
        vector<vector<int>> res; // take a list of vector to store level wise list 
        if(root==NULL)     // root= null return empty list
            return {};
        
        queue<TreeNode*> q;  // take a queue in which we have to store first root and its size after that
        q.push(root);
        TreeNode *tmp;  // create a tmp variable of type TreeNode to store front
        
        int l;
        while(!q.empty()){  // while q not become empty
            l = q.size(); // size of queue updated
            vector<int>v; // take vector to store level wise node in this list to add in list of vector for each level
            for(int i=0;i<l;i++){
                tmp = q.front();  
                q.pop();  // pop front as level 1
                v.push_back(tmp->val);  // store into vector after popping front
                
                if(tmp->left) q.push(tmp->left);  //  similar store its  left  and right a
                if(tmp->right) q.push(tmp->right); // pop one and store its left and right child will come into same level next
            }
            res.push_back(v);  // add list of vector to a list
        }
        return res; // return list of vector
    }
};