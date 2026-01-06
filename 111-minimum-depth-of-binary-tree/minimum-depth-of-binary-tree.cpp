class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;

        if (root->left == nullptr && root->right == nullptr)
            return 1;

        int leftDepth = INT_MAX;
        int rightDepth = INT_MAX;

        if (root->left)
            leftDepth = minDepth(root->left);

        if (root->right)
            rightDepth = minDepth(root->right);

        return 1 + min(leftDepth, rightDepth);
    }
};
