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
    int preIndex = 0;
    TreeNode *build(vector<int> &pre, vector<int> &in, int left, int right)
    {
        if (left > right)
            return nullptr;
        TreeNode *root = new TreeNode(pre[preIndex++]);
        int index = left;
        while (index <= right && in[index] != root->val)
            index++;

        root->left = build(pre, in, left, index - 1);
        root->right = build(pre, in, index + 1, right);
        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        return build(preorder, inorder, 0, preorder.size() - 1);
    }
};