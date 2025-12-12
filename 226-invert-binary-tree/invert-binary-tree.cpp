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
        //base case =>if root is null then return null
        if(!root)
        return NULL;
        //call the left side
        invertTree(root->left);
        //call the right side
        invertTree(root->right);
        //swap both left and right
        //create extra temp to store left node
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        return root;
    }
};