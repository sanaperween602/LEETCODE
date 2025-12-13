/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
bool pathsum(TreeNode*root,int target,int sum)
{
   
    if(root==NULL)
    {return false;}
     sum+=root->val;
    if(root->left==NULL&&root->right==NULL)
    {
        return sum==target;
    }
    

    return (pathsum(root->left,target,sum)|| pathsum(root->right,target,sum));
}
    bool hasPathSum(TreeNode* root, int target) {
    
      return pathsum(root,target,0);




      
    }
};
