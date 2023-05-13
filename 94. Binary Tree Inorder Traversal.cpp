From <https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/949560283/> 

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans ; 
        inorderTraversalHelper(root,ans) ; // make a helper function for inorder
        return ans ; 
    }
    void inorderTraversalHelper(TreeNode* root,vector<int> &ans) // give address of ans as argument
    {
        if(root != NULL)
        {
            inorderTraversalHelper(root->left,ans) ;  // inorder traversal code 
            ans.push_back(root->val) ; 
            inorderTraversalHelper(root->right,ans) ; 
        }
    }
};
