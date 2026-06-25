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
class Solution
{
private:
    int maxpath(TreeNode *node, int &maximum)
    {
        if (!node)
            return 0;
        int leftpath = max(0, maxpath(node->left, maximum));
        int rightpath = max(0, maxpath(node->right, maximum));

        maximum = max(maximum, node->val + leftpath + rightpath);
        return node->val + max(leftpath, rightpath);
    }

public:
    int maxPathSum(TreeNode *root)
    {
        int maximum = INT_MIN;
        maxpath(root, maximum);
        return maximum;
    }
};